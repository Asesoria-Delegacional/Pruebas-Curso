<?php

// Declaracion de arreglos como en C++

$meses = array('a' => 1, 'b' => 2, "juan" => 3, 8 => "juan");

echo $meses['a']."<br>";
echo $meses['b']."<br>";
echo $meses["juan"]."<br>";
echo $meses['8']."<br>";
echo "<br>Barriendo el arreglo con un foreach: <br>";
foreach($meses as $key => $value){
	echo "<br> el campo ".$key." contien el valor de: <b>".$value."</b><br>";
}
?>