<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <?php include "funciones.inc"?>
</head>
<body>
    <?php
        $codSucursal= $_POST["cboSucursal"];

        echo ("<table class='table table-striped'>");
        echo ("<tr>");
        echo ("<th class='text-center'> Nombre empleado </th>");
        echo ("<th class='text-center'> Puesto </th>");
        echo ("<th class='text-center'> Fecha contratacion </th>");
        echo ("<th class='text-center'> Nombre Departamento </th>");
        echo ("<th class='text-center'> Jefe Departamento </th>");
        echo ("<th class='text-center'> Ubicación </th>");
        echo ("</tr>");
        foreach(f_empleadosSucursal($codSucursal) as $codEmpleado => $datosE){
            echo ("<tr>");
            echo ("<td>".f_nombreApellidoEmpleado($codEmpleado)."</td>");
            echo ("<td>".f_puestoEmpleado($codEmpleado)."</td>");
            echo ("<td>".f_fechaContratacionEmpleado($codEmpleado)."</td>");
            foreach(f_todosDepartamentos() as $codDepartamento => $datosD){
                if(f_idDepartamentoEmpleado($codEmpleado) == $codDepartamento){
                    echo ("<td>".f_nombreDepartamento($codDepartamento)."</td>");
                    echo ("<td>".f_nombreJefeDepartamento($codDepartamento)."</td>");
                    echo ("<td>".f_ubicacionDepartamento($codDepartamento)."</td>");
                }
            }
            echo ("</tr>");
        }
    ?>
</body>
</html>