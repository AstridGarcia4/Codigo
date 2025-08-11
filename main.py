import sys
import io
from sistema_llantera import SistemaLlantera

# Configurar la salida estándar para UTF-8
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

def main():
    print("🔧 Iniciando Clamatin")
    print("=" * 50)
    print("USUARIOS DISPONIBLES:")
    print("👤 admin - administrador (Administrador)") 
    print("💼 vendedor - vendedor (Vendedor)")
    print("📦 almacenista - almcenista (Almacenista)")
    print("=" * 50)
    
    app = SistemaLlantera()
    app.run()

if __name__ == "__main__":
    main() 