

<?php

$var = 4;
$frutas = array("pera", "manzana");
function valor(&$val){
  ++$val;
  return $val;
}
function agregar_frutas(&$frut,$new_frut){
  array_push($frut, $new_frut);
}


//echo "<br />Valor: ".valor($var);
agregar_frutas($frutas, "piña"); // agregamos frutas sin referencia
agregar_frutas($frutas, "naranja");

foreach ($frutas as $valor) {
  echo "<br />".$valor;
}

?>
