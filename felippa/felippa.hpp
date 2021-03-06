void comp_next ( int n, int k, int a[], bool *more, int *h, int *t );
double hexa_unit_monomial ( int expon[3] );
void hexa_unit_monomial_test ( int degree_max );
void hexa_unit_quad_test ( int degree_max );;
void hexa_unit_rule ( int order[], double w[], double xyz[] );
double hexa_unit_volume ( );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
bool i4vec_odd_any ( int n, int a[] );
int i4vec_product ( int n, int a[] );
double line_unit_monomial ( int expon[1] );
void line_unit_monomial_test ( int degree_max );
void line_unit_o01 ( double w[], double x[] );
void line_unit_o02 ( double w[], double x[] );
void line_unit_o03 ( double w[], double x[] );
void line_unit_o04 ( double w[], double x[] );
void line_unit_o05 ( double w[], double x[] );
void line_unit_quad_test ( int degree_max );;
double line_unit_volume ( );
double *monomial_value ( int dim_num, int point_num, int expon[], double x[] );
double pyra_unit_monomial ( int expon[3] );
void pyra_unit_monomial_test ( int degree_max );
void pyra_unit_o01 ( double w[], double xyz[] );
void pyra_unit_o05 ( double w[], double xyz[] );
void pyra_unit_o06 ( double w[], double xyz[] );
void pyra_unit_o08 ( double w[], double xyz[] );
void pyra_unit_o08b ( double w[], double xyz[] );
void pyra_unit_o09 ( double w[], double xyz[] );
void pyra_unit_o13 ( double w[], double xyz[] );
void pyra_unit_o18 ( double w[], double xyz[] );
void pyra_unit_o27 ( double w[], double xyz[] );
void pyra_unit_o48 ( double w[], double xyz[] );
void pyra_unit_quad_test ( int degree_max );;
double pyra_unit_volume ( );
double quad_unit_monomial ( int expon[2] );
void quad_unit_monomial_test ( int degree_max );
void quad_unit_quad_test ( int degree_max );;
void quad_unit_rule ( int order[], double w[], double xy[] );
double quad_unit_volume ( );
double r8_abs ( double x );
double r8_choose ( int n, int k );
double r8_mop ( int i );
double r8mat_det_4d ( double a[4*4] );
void r8mat_write ( string output_filename, int m, int n, double table[] );
void r8vec_copy ( int n, double a1[], double a2[] );
void r8vec_direct_product ( int factor_index, int factor_order, 
  double factor_value[], int factor_num, int point_num, double x[] );
void r8vec_direct_product2 ( int factor_index, int factor_order, 
  double factor_value[], int factor_num, int point_num, double w[] );
double r8vec_dot_product ( int n, double a1[], double a2[] );
void subcomp_next ( int n, int k, int a[], bool *more, int *h, int *t );
double tetr_unit_monomial ( int expon[3] );
void tetr_unit_monomial_test ( int degree_max );
void tetr_unit_o01 ( double w[], double xy[] );
void tetr_unit_o04 ( double w[], double xy[] );
void tetr_unit_o08 ( double w[], double xy[] );
void tetr_unit_o08b ( double w[], double xy[] );
void tetr_unit_o14 ( double w[], double xy[] );
void tetr_unit_o14b ( double w[], double xy[] );
void tetr_unit_o15 ( double w[], double xy[] );
void tetr_unit_o15b ( double w[], double xy[] );
void tetr_unit_o24 ( double w[], double xy[] );
void tetr_unit_quad_test ( int degree_max );;
double tetr_unit_volume ( );
void timestamp ( );
double trig_unit_monomial ( int expon[2] );
void trig_unit_monomial_test ( int degree_max );
void trig_unit_o01 ( double w[], double xy[] );
void trig_unit_o03 ( double w[], double xy[] );
void trig_unit_o03b ( double w[], double xy[] );
void trig_unit_o06 ( double w[], double xy[] );
void trig_unit_o06b ( double w[], double xy[] );
void trig_unit_o07 ( double w[], double xy[] );
void trig_unit_o12 ( double w[], double xy[] );
void trig_unit_quad_test ( int degree_max );
double trig_unit_volume ( );
double wedg_unit_monomial ( int expon[3] );
void wedg_unit_monomial_test ( int degree_max );
void wedg_unit_quad_test ( int degree_max );
void wedg_unit_rule ( int line_order, int trig_order, double w[], double xyz[] );
double wedg_unit_volume ( );
void wedg_unit_write_test ( );
