long double
modfl (long double x, long double *iptr)
{
  return __builtin_modfl(x, (double *)iptr);
}
