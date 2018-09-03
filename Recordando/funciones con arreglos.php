<?php

$meses = array("ene", "Febre", "Mar", "Abril", "mayo");
$dias = array("dia_1" => "Lunes", "martes", "Dia_2" => "Miercoles");
$semanas = array("primero", "segundo", "tercero");
$conjunto = array_merge($meses, $dias, $semanas);
$month = array("January", "Febraury", "March", "Jun", "July", "Agost", "September");

// echo "<br>Array conbinados:<br>";
// foreach($conjunto as $llave => $valor){
	// echo "<br>".$llave." contiene ".$valor;
// }

// echo "<br><br>Eliminando el primer elemento del array Meses<br>";
// echo "<br>El arreglo contiene: ".count($meses)." elementos";
// foreach($meses as $value){
	// echo "<br>".$value;
// }
// array_shift($meses);
// echo "<br><br>Se ha retirado el primer elemento";
// foreach($meses as $value){
	// echo "<br>".$value;
// }
// echo "<br>Ahora el arreglo contiene ".count($meses)." elementos al retirar el primero ";
// echo $meses[3];

// echo "<br><br><br>";
// echo "<br><br>Eliminando el ultimo elemento del array Meses<br>";
// echo "<br>El arreglo contiene: ".count($meses)." elementos";
// foreach($meses as $value){
	// echo "<br>".$value;
// }
// array_pop($meses);
// echo "<br><br>Se ha retirado el ultimo elemento";
// foreach($meses as $value){
	// echo "<br>".$value;
// }
// echo "<br>Ahora el arreglo contiene ".count($meses)." elementos al retirar el primero ";
// echo $meses[2];
// -----------------------------------------------------
echo "<br><br><br><b>Funcion array_slice() copiar un segmento del arreglo:</b><br>";
foreach($month as $key => $value){
	echo "<br>".$key." contiene ".$value;
}
$segmento = array_slice($month,2, 3, true);
echo "<br><br><b>Elementos copiados</b><br>";
foreach($segmento as $key => $value){
	echo "<br>".$key." contiene ".$value;
}
echo "<br>Elementos en month: ".count($month).", elementos en: ".count($segmento);
echo "<br>--------------------------------------------------------------";
echo "<br><br><b>USo de la funcion array_splice() Eliminar elementos</b>";
echo "<br><br>Elementos en MONTH<br>";

foreach($month as $key => $value){
	echo "<br>".$key." contiene ".$value;
}
echo "<br>Contiene ".count($month)." elementos";
$liminando = array_splice($month, 2, 3);
echo "<br><br>Se eliminaron : ";
foreach($liminando as $key => $value){
	echo $key." -> ".$value." ";
}
echo "<br><br><b>Ahora los elemento en MONTH son: </b>: ";
foreach($month as $key => $value){
	echo "<br>".$key." contiene ".$value;
}
echo "<br>Contiene ".count($month)." elementos";




?>