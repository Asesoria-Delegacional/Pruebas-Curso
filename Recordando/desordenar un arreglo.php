


<?php

$nombres = array("Pablo", "luisa", "Michell", "Laura", "pedro", "miguel");

// uso de suffle
shuffle($nombres);
foreach($nombres as $key => $value){
	echo "<br>".$key." ".$value;
}

$num_aleatorio = array_rand($nombres, 2);
echo "<br>Los numeros aleatorios seleccionados son: ";
foreach($num_aleatorio as $key => $value) {
	echo "<br />".$value;
}
echo "<br />Pertenecen a los alumnos: <br />";
foreach ($num_aleatorio as $valor) {
	echo "<br />".$nombres[$valor];
}

?>
