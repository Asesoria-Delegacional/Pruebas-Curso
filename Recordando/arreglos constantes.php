

<?php

define('FRUTAS', ["manzana", "platano", "uva", "sandia"]);
$dias = array("lunes", "martes", "miercoles");

foreach (FRUTAS as $key => $fruta) {
  echo "<br />".$fruta;
}
echo "<br /><br />";


echo FRUTAS[1];
// --------------  función var_dump()-------------------
echo "<br /><br />var_dump()<br />";
var_dump(FRUTAS);

// --------------  función print_r()-------------------
echo "<br /><br />print_r()<br />";
print_r(FRUTAS);
echo "<br />";
print_r($dias);
 ?>
