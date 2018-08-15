import time
import datetime


class Reloj:

    def pantalla(self):
        """ Aca se define la pantalla, intentando simular la pantalla fisica. """

        print("""
        *************************************
        *                                   *
        *                                   *
        *                                   *
        *                                   *
        *************************************
            """)

    def encendido(self):
        """ Aca se define el encendido, intentando simular la pantalla fisica. """

        print("""
        *************************************
        *          Sea bienvenido           *
        *             Usuario               *
        *                                   *
        *             Cargando....          *
        *************************************
            """)

    def timeDisplay(self):
        """ Aca definimos lo que simularia la pantalla principal, con la fecha y hora """

        print(datetime.datetime.now)


smartwatch = Reloj()
smartwatch.pantalla()
smartwatch.timeDisplay()
