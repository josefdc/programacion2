#include <iostream>
#include <vector>
#include <string>

using namespace std;
/**
 * @struct Recibo
 * @brief Estructura para almacenar información de un recibo de caja menor.
 * 
 * Almacena detalles como la ciudad, fecha, número, beneficiario, valor y concepto del recibo.
 */
struct Recibo {
    string ciudad;   ///< Ciudad en la que se emite el recibo.
    string fecha;    ///< Fecha de emisión del recibo.
    int numero;      ///< Número identificador del recibo.
    string pagadoA;  ///< Nombre de la persona a quien se le ha pagado.
    double valor;    ///< Valor monetario del recibo.
    string concepto; ///< Concepto o razón del pago.
};

void capturarDocumento(vector<Recibo>& recibos);
void consultarDocumento(const vector<Recibo>& recibos);
void listarDocumentos(const vector<Recibo>& recibos);
void modificarDocumento(vector<Recibo>& recibos);
string valorEnLetras(double valor);
/**
 * @brief Función principal que ejecuta el menú del programa.
 * 
 * @return int Código de salida del programa.
 */
int main() {
    vector<Recibo> recibos;
    int opcion;

    do {
        cout << "Menu Principal\n";
        cout << "1. Capturar Documento\n";
        cout << "2. Consultar Documento\n";
        cout << "3. Listar Documentos\n";
        cout << "4. Modificar Documento\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                capturarDocumento(recibos);
                break;
            case 2:
                consultarDocumento(recibos);
                break;
            case 3:
                listarDocumentos(recibos);
                break;
            case 4:
                modificarDocumento(recibos);
                break;
        }
    } while (opcion != 5);

    return 0;
}
/**
 * @brief Captura los datos de un nuevo recibo y lo almacena en el vector.
 * 
 * @param recibos Referencia al vector de recibos.
 */
void capturarDocumento(vector<Recibo>& recibos) {
    if (recibos.size() >= 50) {
        cout << "No se pueden agregar más recibos. El límite es de 50." << endl;
        return;
    }

    Recibo nuevoRecibo;
    cout << "Ingrese la ciudad: ";
    cin.ignore();
    getline(cin, nuevoRecibo.ciudad);
    cout << "Ingrese la fecha (dd/mm/aaaa): ";
    getline(cin, nuevoRecibo.fecha);
    cout << "Ingrese el número del recibo: ";
    cin >> nuevoRecibo.numero;
    cout << "Pagado a: ";
    cin.ignore();
    getline(cin, nuevoRecibo.pagadoA);
    cout << "Ingrese el valor: ";
    cin >> nuevoRecibo.valor;
    cout << "Ingrese el concepto: ";
    cin.ignore();
    getline(cin, nuevoRecibo.concepto);

    recibos.push_back(nuevoRecibo);
    cout << "Recibo capturado exitosamente." << endl;
}
/**
 * @brief Consulta un recibo por su número y muestra sus detalles.
 * 
 * @param recibos Vector de recibos a consultar.
 */
void consultarDocumento(const vector<Recibo>& recibos) {
    int numero;
    cout << "Ingrese el número del recibo a consultar: ";
    cin >> numero;

    for (const auto& recibo : recibos) {
        if (recibo.numero == numero) {
            cout << "Recibo encontrado:" << endl;
            cout << "Ciudad: " << recibo.ciudad << ", Fecha: " << recibo.fecha << ", Número: " << recibo.numero
                 << ", Pagado a: " << recibo.pagadoA << ", Valor: " << recibo.valor << ", Concepto: " << recibo.concepto << endl;
            return;
        }
    }

    cout << "Recibo no encontrado." << endl;
}
/**
 * @brief Lista todos los recibos almacenados y muestra el valor total.
 * 
 * @param recibos Vector de recibos a listar.
 */
void listarDocumentos(const vector<Recibo>& recibos) {
    double total = 0.0;
    for (const auto& recibo : recibos) {
        cout << "Ciudad: " << recibo.ciudad << ", Fecha: " << recibo.fecha << ", Número: " << recibo.numero
             << ", Pagado a: " << recibo.pagadoA << ", Valor: " << recibo.valor << ", Concepto: " << recibo.concepto << endl;
        total += recibo.valor;
    }
    cout << "Total valor de los recibos: " << total << endl;
}
/**
 * @brief Modifica los datos de un recibo existente.
 * 
 * @param recibos Referencia al vector de recibos.
 */
void modificarDocumento(vector<Recibo>& recibos) {
    int numero;
    cout << "Ingrese el número del recibo a modificar: ";
    cin >> numero;

    for (auto& recibo : recibos) {
        if (recibo.numero == numero) {
            cout << "Modificar los datos del recibo:" << endl;
            cout << "Ciudad (actual: " << recibo.ciudad << "): ";
            cin.ignore();
            getline(cin, recibo.ciudad);
            cout << "Fecha (actual: " << recibo.fecha << "): ";
            getline(cin, recibo.fecha);
            cout << "Pagado a (actual: " << recibo.pagadoA << "): ";
            getline(cin, recibo.pagadoA);
            cout << "Valor (actual: " << recibo.valor << "): ";
            cin >> recibo.valor;
            cout << "Concepto (actual: " << recibo.concepto << "): ";
            cin.ignore();
            getline(cin, recibo.concepto);
            cout << "Recibo modificado exitosamente." << endl;
            return;
        }
    }

    cout << "Recibo no encontrado." << endl;
}
/**
 * @brief Convierte un valor numérico a su representación en letras.
 * 
 * @param valor Valor numérico a convertir.
 * @return string Representación en letras del valor numérico.
 */
string valorEnLetras(double valor) {
    
    int val = static_cast<int>(valor);
    if (val > 999) {
        return "Valor demasiado grande para convertir";
    }

    string unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string centenas[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

    string resultado;
    if (val >= 100) {
        resultado += centenas[val / 100];
        val %= 100;
        if (val > 0) resultado += " y ";
    }
    if (val >= 10) {
        resultado += decenas[val / 10];
        val %= 10;
        if (val > 0) resultado += " y ";
    }
    if (val > 0) {
        resultado += unidades[val];
    }

    return resultado;
}
