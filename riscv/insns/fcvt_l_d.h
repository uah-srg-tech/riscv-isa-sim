require_xpr64;
require_fp;
softfloat_roundingMode = RM;
RD = f64_to_i64(FRS1, RM, true);
set_fp_exceptions;
