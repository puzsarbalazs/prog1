library (matlab)

stp <- function(x)
{
  primes=primes(x)
  diff=primes[2:length(primes)]-primes[1:length(primes)-1]
  indexes=which(diff==2)
  primes_1=primes[indexes]
  primes_2=primes[indexes]+2
  sumofprimes=1/primes_1+1/primes_2
  return(sum(sumofprimes))
  
}

  
  