<?php

$numeros = array(3,6,1,3,5,7,4,2);
$numerosString = array('4', '1', '5', '3');
$nombres = array("pedro", "Laura", "miguel", "Pablo", "luisa", "Michell");

// Funciones de ordenamiento
sort($numeros);
sort($numerosString, SORT_STRING);
//sort($nombres, SORT_NATURAL); //--> para ordenar sin distincion de mayusculas o minusculas
sort($nombres, SORT_NATURAL | SORT_FLAG_CASE); // ordena tomando en cuenta mayusculas o minusculas

echo "<br><br>--------  Tipos de numeros enteros<br>";
foreach($numeros as $key => $value){
	echo "<br>Num[".$key."]: ".$value;
}

echo "<br><br>--------  Tipos de numeros cadena<br>";
foreach($numerosString as $key => $value){
	echo "<br>Num[".$key."]: ".$value;
}

echo "<br><br>--------  Ordenando nombres sin distincion de mayusculas o minusculas<br>";
foreach($nombres as $key => $value){
	echo "<br>Num[".$key."]: ".$value;
}


?>