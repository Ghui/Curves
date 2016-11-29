#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main() {

  screen s;
  struct matrix *edges;
  struct matrix *transform;
  struct matrix *bezier;
  struct matrix *hermite;
  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);
  /*bezier = new_matrix(4,4);
  hermite = new_matrix(4,4);

  edges = make_bezier();
  print_matrix(edges);
  edges = make_hermite();
  print_matrix(edges);
  bezier = generate_curve_coefs(1,2,3,4,1);
  print_matrix(bezier);
  hermite = generate_curve_coefs(1,2,3,4,0);
  print_matrix(hermite);
  */
  //add_curve(edges,1,2,3,4,1,2,3,4,M_PI/20,0);
  parse_file( "script_c", transform, edges, s );
  
  free_matrix( transform );
  free_matrix( edges );
  /*free_matrix(bezier);
  free_matrix(hermite);
  */
}  
