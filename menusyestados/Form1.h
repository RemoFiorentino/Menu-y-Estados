#pragma once

namespace menusyestados {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  configurarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cerrarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copiarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pegarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cortarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  buscarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  imagenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  urlToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  archivoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  textToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  urlToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  archivoToolStripMenuItem2;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ingresarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox1;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel1;
	private: System::Windows::Forms::TextBox^  textBox1;



	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configurarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copiarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pegarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cortarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imagenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->urlToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->archivoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->urlToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->archivoToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ingresarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->archivoToolStripMenuItem, 
				this->editarToolStripMenuItem, this->buscarToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(365, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->nuevoToolStripMenuItem, 
				this->configurarToolStripMenuItem, this->cerrarToolStripMenuItem});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::nuevoToolStripMenuItem_Click);
			// 
			// configurarToolStripMenuItem
			// 
			this->configurarToolStripMenuItem->Name = L"configurarToolStripMenuItem";
			this->configurarToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->configurarToolStripMenuItem->Text = L"configurar";
			this->configurarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::configurarToolStripMenuItem_Click);
			// 
			// cerrarToolStripMenuItem
			// 
			this->cerrarToolStripMenuItem->Name = L"cerrarToolStripMenuItem";
			this->cerrarToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->cerrarToolStripMenuItem->Text = L"cerrar";
			this->cerrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cerrarToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->copiarToolStripMenuItem, 
				this->pegarToolStripMenuItem, this->cortarToolStripMenuItem, this->opcionesToolStripMenuItem});
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->editarToolStripMenuItem->Text = L"Editar";
			// 
			// copiarToolStripMenuItem
			// 
			this->copiarToolStripMenuItem->Name = L"copiarToolStripMenuItem";
			this->copiarToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->copiarToolStripMenuItem->Text = L"copiar";
			// 
			// pegarToolStripMenuItem
			// 
			this->pegarToolStripMenuItem->Name = L"pegarToolStripMenuItem";
			this->pegarToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->pegarToolStripMenuItem->Text = L"pegar";
			this->pegarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pegarToolStripMenuItem_Click);
			// 
			// cortarToolStripMenuItem
			// 
			this->cortarToolStripMenuItem->Name = L"cortarToolStripMenuItem";
			this->cortarToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->cortarToolStripMenuItem->Text = L"cortar";
			// 
			// opcionesToolStripMenuItem
			// 
			this->opcionesToolStripMenuItem->Name = L"opcionesToolStripMenuItem";
			this->opcionesToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->opcionesToolStripMenuItem->Text = L"opciones";
			// 
			// buscarToolStripMenuItem
			// 
			this->buscarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->imagenToolStripMenuItem, 
				this->textToolStripMenuItem});
			this->buscarToolStripMenuItem->Name = L"buscarToolStripMenuItem";
			this->buscarToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->buscarToolStripMenuItem->Text = L"Buscar";
			// 
			// imagenToolStripMenuItem
			// 
			this->imagenToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->urlToolStripMenuItem, 
				this->archivoToolStripMenuItem1});
			this->imagenToolStripMenuItem->Name = L"imagenToolStripMenuItem";
			this->imagenToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->imagenToolStripMenuItem->Text = L"Imagen";
			// 
			// urlToolStripMenuItem
			// 
			this->urlToolStripMenuItem->Name = L"urlToolStripMenuItem";
			this->urlToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->urlToolStripMenuItem->Text = L"Url";
			this->urlToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::urlToolStripMenuItem_Click);
			// 
			// archivoToolStripMenuItem1
			// 
			this->archivoToolStripMenuItem1->Name = L"archivoToolStripMenuItem1";
			this->archivoToolStripMenuItem1->Size = System::Drawing::Size(113, 22);
			this->archivoToolStripMenuItem1->Text = L"archivo";
			// 
			// textToolStripMenuItem
			// 
			this->textToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->urlToolStripMenuItem1, 
				this->archivoToolStripMenuItem2, this->ingresarToolStripMenuItem});
			this->textToolStripMenuItem->Name = L"textToolStripMenuItem";
			this->textToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->textToolStripMenuItem->Text = L"Text";
			// 
			// urlToolStripMenuItem1
			// 
			this->urlToolStripMenuItem1->Name = L"urlToolStripMenuItem1";
			this->urlToolStripMenuItem1->Size = System::Drawing::Size(116, 22);
			this->urlToolStripMenuItem1->Text = L"url";
			// 
			// archivoToolStripMenuItem2
			// 
			this->archivoToolStripMenuItem2->Name = L"archivoToolStripMenuItem2";
			this->archivoToolStripMenuItem2->Size = System::Drawing::Size(116, 22);
			this->archivoToolStripMenuItem2->Text = L"archivo";
			// 
			// ingresarToolStripMenuItem
			// 
			this->ingresarToolStripMenuItem->Name = L"ingresarToolStripMenuItem";
			this->ingresarToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->ingresarToolStripMenuItem->Text = L"Ingresar";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 245);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(365, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripButton1, 
				this->toolStripButton2, this->toolStripComboBox1, this->toolStripLabel1});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(365, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::toolStripButton2_Click);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"primero", L"segundo", L"tercero", L"cuarto", 
				L"quinto"});
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 25);
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(119, 22);
			this->toolStripLabel1->Text = L"Barra de Herramienta";
			this->toolStripLabel1->Click += gcnew System::EventHandler(this, &Form1::toolStripLabel1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 59);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(340, 173);
			this->textBox1->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(365, 267);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void nuevoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="El boton nuevo del menu fue seleccionado...";
			 toolStripStatusLabel1->Text = "El ultimo boton fue del menu de la seccion archivo";
		 }
private: System::Void configurarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->Text="El boton configurar del menu fue seleccionado...";
			toolStripStatusLabel1->Text = "El ultimo boton fue del menu de la seccion archivo";
		 }
private: System::Void cerrarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void pegarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->Text="El boton pegar del menu fue seleccionado...";
			toolStripStatusLabel1->Text = "El ultimo boton fue del menu de la seccion editar";
		 }
private: System::Void urlToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->Text="El boton url de imagen del menu fue seleccionado...";
			toolStripStatusLabel1->Text = "El ultimo boton fue del menu de la seccion buscar";
		 }
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Visible=true;
			 toolStripStatusLabel1->Text = "El listBox se ha hecho visible";
		 }
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Visible=false;
			 toolStripStatusLabel1->Text = "El listBox se ha hecho invisible";
		 }
private: System::Void toolStripLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Esta es la barra de herramientas ...");
			 toolStripStatusLabel1->Text = "mostrando detalles";
		 }
};
}

