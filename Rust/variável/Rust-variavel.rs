
fn main(){

  // por padrão variáveis são imutáveis
  // não podem ter outros valores uma vez que um valor seja atribuído a ela

  let valor1 = 10; 
  println!("valor1: {}", valor1);  

  // para tornar uma variável mutável, utiliza-se "mut" após "let"

  let mut valor2 = 10;
  println!("valor2: {}", valor2);
  valor2 = 20;
  println!("valor2 novo valor: {}", valor2);

}