<?php
    function f_todosDepartamentos():array{
        include 'datos.inc';

        return $departamentos;
    }

    function f_todosSucursales():array{
        include 'datos.inc';

        return $sucursales;
    }

    function f_nombreApellidoEmpleado($codEmpleado):string{
        include 'datos.inc';
        return $empleados[$codEmpleado]['Empleado'];
    }

    function f_puestoEmpleado($codEmpleado):string{
        include 'datos.inc';
        return $empleados[$codEmpleado]['Puesto'];
    }

    function f_idDepartamentoEmpleado($codEmpleado):int{
        include 'datos.inc';
        return $empleados[$codEmpleado]['ID_Departamento'];
    }

    function f_idSucursalEmpleado($codEmpleado):int{
        include 'datos.inc';
        return $empleados[$codEmpleado]['ID_Sucursal'];
    }

    function f_fechaContratacionEmpleado($codEmpleado):string{
        include 'datos.inc';
        return $empleados[$codEmpleado]['FechaContratacion'];
    }


    function f_nombreDepartamento($codDepartamento):string{
        include 'datos.inc';
        return $departamentos[$codDepartamento]['Nombre'];
    }

    function f_nombreJefeDepartamento($codDepartamento):string{
        include 'datos.inc';
        return $departamentos[$codDepartamento]['JefeDepartamento'];
    }

    function f_ubicacionDepartamento($codDepartamento):string{
        include 'datos.inc';
        return $departamentos[$codDepartamento]['Ubicacion'];
    }

    function f_nombreSucursal($codSucursal):string{
        include 'datos.inc';
        return $sucursales[$codSucursal]['Nombre'];
    }

    function f_direccionSucursal($codSucursal):string{
        include 'datos.inc';
        return $sucursales[$codSucursal]['Direccion'];
    }

    function f_ciudadSucursal($codSucursal):string{
        include 'datos.inc';
        return $sucursales[$codSucursal]['Ciudad'];
    }

    function f_empleadosSucursal($codSucursal):array{
        include 'datos.inc';
        $lEmpleados = [];

        foreach($empleados as $codEmpleado => $datosE){
            if($datosE['ID_Sucursal'] == $codSucursal){
                $lEmpleados[$codEmpleado] = $datosE; 
            }
        }

        return $lEmpleados;
    }
?> 