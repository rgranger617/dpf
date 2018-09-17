library(ggplot2)
#' @export
plotStates <- function(performance, performer, onset, params, particleNumber = 200, initialMean = c(132,0), initialVariance = c(400,10)){
    if(is.list(params)) params = unlist(params)
    lt = diff(c(onset, 61))
    y = matrix(performance, nrow = 1)
    mats = yupengMats(lt, params[1], params[2:4], params[5:8], params[9:12], initialMean, initialVariance)
    bs = beamSearch(mats$a0, mats$P0, c(1,0,0,0,0,0,0,0), mats$dt, mats$ct, mats$Tt, mats$Zt,
                    mats$Rt, mats$Qt, mats$GGt, y, mats$transMat, particleNumber)
    bestpath = bs$paths[which.max(bs$weights),]
    kal = kalman(mats, bestpath, y)
    df = data.frame(measure = tempos$note_onset, tempo = performance, 
                    inferred = c(kal$ests), state = convert8to4(bestpath))
    ggplot(df, aes(x=measure, y=tempo)) + ylim(0,max(df$tempo)) +
        geom_rect(aes(xmin = 33, xmax = 45, ymin = 0, ymax = max(df$tempo),
                      fill = 'gray90', color = 'gray90'))+
        geom_line(aes(y=df$tempo), color='black')+
        geom_point(aes(y=df$inferred), color = c("blue","red","green","orange")[df$state])+
        #scale_color_manual(values = c("blue","red","green","orange"))+
        theme(legend.position = 'none', legend.title = element_blank())+
        ggtitle(performer)
        
}