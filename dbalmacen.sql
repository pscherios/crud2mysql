CREATE TABLE `marcas` (
  `id_marca` smallint NOT NULL AUTO_INCREMENT,
  `marca` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id_marca`)

CREATE TABLE `db_almacen`.`productos` (
  `id_producto` INT NOT NULL AUTO_INCREMENT,
  `producto` VARCHAR(50) NULL,
  `id_marca` SMALLINT NULL,
  `descripcion` VARCHAR(100) NULL,
  `precio_costo` DECIMAL(8,2) NULL,
  `precio_venta` DECIMAL(8,2) NULL,
  `existencia` INT NULL,
  `fecha_ingreso` DATETIME NULL,
  PRIMARY KEY (`id_producto`));

ALTER TABLE `db_almacen`.`productos` 
ADD INDEX `id_marca_productos_idx` (`id_marca` ASC) VISIBLE;
;
ALTER TABLE `db_almacen`.`productos` 
ADD CONSTRAINT `id_marca_productos`
  FOREIGN KEY (`id_marca`)
  REFERENCES `db_almacen`.`marcas` (`id_marca`)
  ON DELETE NO ACTION
  ON UPDATE CASCADE;