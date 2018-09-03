

<?php

$numeros = array(3, 2, 5, 1, 4); // Numeros desrodenados

echo "<br /><br />Ordenamiento de arreglos numericos por orden descendente<br />";
// Funcion de ordenación descendente
rsort($numeros);

foreach ($numeros as $key => $value) {
  echo $value." ";
}
echo "<br /><br />Ordenamiento de arreglos numericos por orden ascendente<br />";
sort($numeros, SORT_NUMERIC);
foreach ($numeros as $key => $value) {
  echo $value." ";
}

 ?>
