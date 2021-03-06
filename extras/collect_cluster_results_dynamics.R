#2. This short script collects all parameter estimates from the cluster 
# (or local) when run via cluster_analysis_my_model.R

library(batchtools)
loadRegistry('my-mazurka-dynamics', writeable=TRUE)

getStatus()

outL = reduceResultsList()
fun = function(x) x[which.min(x$value),]
pvec_ml = t(sapply(outL,fun))
rownames(pvec_ml) = names(dynamics[-c(1:3)])
pvec_ml = as.data.frame(pvec_ml)

save(pvec_ml, file='mazurkaDynamicsResults.Rdata')
