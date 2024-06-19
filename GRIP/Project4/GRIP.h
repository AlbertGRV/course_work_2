#pragma once

#include <string>
#include <cmath>

namespace Project4 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace OpenCvSharp;
    using namespace OpenCvSharp::Extensions;

    public ref class GRIP : public System::Windows::Forms::Form
    {
    public:
        GRIP(void)
        {
            InitializeComponent();
        }

    protected:
        ~GRIP()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ btnLoadImage;
    private: System::Windows::Forms::PictureBox^ pictureBox;
    private: System::Windows::Forms::TrackBar^ trackBarBlurLevel;
    private: System::Windows::Forms::TrackBar^ trackBarFocalLength;
    private: System::Windows::Forms::TrackBar^ trackBarObjectDistance;
    private: System::Windows::Forms::Label^ labelInFrontOfSubject;
    private: System::Windows::Forms::Label^ labelBehindSubject;
    private: System::Windows::Forms::Label^ labelHyperfocalDistance;
    private: System::Windows::Forms::Label^ labelFocalLength;
    private: System::Windows::Forms::Label^ labelAperture;
    private: System::Windows::Forms::Label^ labelObjectDistance;
    private: System::ComponentModel::Container^ components;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ labelgripp;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
    private:
        System::Windows::Forms::PictureBox^ pictureBox1M;
        System::Windows::Forms::PictureBox^ pictureBox2M;
        bool isDragging = false;
        System::Drawing::Point offset; // Использование System::Drawing::Point
    private: System::Windows::Forms::PictureBox^ pictureBoxPhotograph;
    private: System::Windows::Forms::PictureBox^ pictureBoxLineika;
    private: System::Windows::Forms::PictureBox^ pictureBox2;


    private:
        OpenCvSharp::Mat^ srcImage;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GRIP::typeid));
            this->btnLoadImage = (gcnew System::Windows::Forms::Button());
            this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
            this->trackBarBlurLevel = (gcnew System::Windows::Forms::TrackBar());
            this->trackBarFocalLength = (gcnew System::Windows::Forms::TrackBar());
            this->trackBarObjectDistance = (gcnew System::Windows::Forms::TrackBar());
            this->labelInFrontOfSubject = (gcnew System::Windows::Forms::Label());
            this->labelBehindSubject = (gcnew System::Windows::Forms::Label());
            this->labelHyperfocalDistance = (gcnew System::Windows::Forms::Label());
            this->labelFocalLength = (gcnew System::Windows::Forms::Label());
            this->labelAperture = (gcnew System::Windows::Forms::Label());
            this->labelObjectDistance = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->labelgripp = (gcnew System::Windows::Forms::Label());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->pictureBox1M = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2M = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBoxPhotograph = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBoxLineika = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarBlurLevel))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarFocalLength))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarObjectDistance))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->menuStrip1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1M))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2M))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPhotograph))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLineika))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // btnLoadImage
            // 
            this->btnLoadImage->Location = System::Drawing::Point(24, 23);
            this->btnLoadImage->Margin = System::Windows::Forms::Padding(6);
            this->btnLoadImage->Name = L"btnLoadImage";
            this->btnLoadImage->Size = System::Drawing::Size(200, 44);
            this->btnLoadImage->TabIndex = 0;
            this->btnLoadImage->Text = L"Load Image";
            this->btnLoadImage->UseVisualStyleBackColor = true;
            // 
            // pictureBox
            // 
            this->pictureBox->Location = System::Drawing::Point(1121, 111);
            this->pictureBox->Margin = System::Windows::Forms::Padding(6);
            this->pictureBox->Name = L"pictureBox";
            this->pictureBox->Size = System::Drawing::Size(2127, 1245);
            this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox->TabIndex = 2;
            this->pictureBox->TabStop = false;
            // 
            // trackBarBlurLevel
            // 
            this->trackBarBlurLevel->Location = System::Drawing::Point(15, 984);
            this->trackBarBlurLevel->Margin = System::Windows::Forms::Padding(6);
            this->trackBarBlurLevel->Maximum = 64;
            this->trackBarBlurLevel->Minimum = 1;
            this->trackBarBlurLevel->Name = L"trackBarBlurLevel";
            this->trackBarBlurLevel->Size = System::Drawing::Size(822, 90);
            this->trackBarBlurLevel->TabIndex = 5;
            this->trackBarBlurLevel->TickStyle = System::Windows::Forms::TickStyle::None;
            this->trackBarBlurLevel->Value = 1;
            this->trackBarBlurLevel->ValueChanged += gcnew System::EventHandler(this, &GRIP::trackBarBlurLevel_ValueChanged);
            // 
            // trackBarFocalLength
            // 
            this->trackBarFocalLength->Location = System::Drawing::Point(15, 1206);
            this->trackBarFocalLength->Margin = System::Windows::Forms::Padding(6);
            this->trackBarFocalLength->Maximum = 75;
            this->trackBarFocalLength->Minimum = 6;
            this->trackBarFocalLength->Name = L"trackBarFocalLength";
            this->trackBarFocalLength->Size = System::Drawing::Size(822, 90);
            this->trackBarFocalLength->TabIndex = 6;
            this->trackBarFocalLength->TickStyle = System::Windows::Forms::TickStyle::None;
            this->trackBarFocalLength->Value = 6;
            this->trackBarFocalLength->ValueChanged += gcnew System::EventHandler(this, &GRIP::trackBarFocalLength_ValueChanged);
            // 
            // trackBarObjectDistance
            // 
            this->trackBarObjectDistance->Location = System::Drawing::Point(15, 1400);
            this->trackBarObjectDistance->Margin = System::Windows::Forms::Padding(6);
            this->trackBarObjectDistance->Maximum = 20;
            this->trackBarObjectDistance->Minimum = 1;
            this->trackBarObjectDistance->Name = L"trackBarObjectDistance";
            this->trackBarObjectDistance->Size = System::Drawing::Size(822, 90);
            this->trackBarObjectDistance->TabIndex = 8;
            this->trackBarObjectDistance->TickStyle = System::Windows::Forms::TickStyle::None;
            this->trackBarObjectDistance->Value = 1;
            this->trackBarObjectDistance->Scroll += gcnew System::EventHandler(this, &GRIP::trackBarObjectDistance_Scroll);
            this->trackBarObjectDistance->ValueChanged += gcnew System::EventHandler(this, &GRIP::trackBarObjectDistance_ValueChanged);
            // 
            // labelInFrontOfSubject
            // 
            this->labelInFrontOfSubject->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->labelInFrontOfSubject->Location = System::Drawing::Point(10, 634);
            this->labelInFrontOfSubject->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelInFrontOfSubject->Name = L"labelInFrontOfSubject";
            this->labelInFrontOfSubject->Size = System::Drawing::Size(693, 44);
            this->labelInFrontOfSubject->TabIndex = 1;
            this->labelInFrontOfSubject->Text = L"Ближняя граница приемлимой чёткости: ";
            // 
            // labelBehindSubject
            // 
            this->labelBehindSubject->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->labelBehindSubject->Location = System::Drawing::Point(10, 567);
            this->labelBehindSubject->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelBehindSubject->Name = L"labelBehindSubject";
            this->labelBehindSubject->Size = System::Drawing::Size(630, 44);
            this->labelBehindSubject->TabIndex = 2;
            this->labelBehindSubject->Text = L"Дальняя граница приемлимой чёткости: ";
            // 
            // labelHyperfocalDistance
            // 
            this->labelHyperfocalDistance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->labelHyperfocalDistance->Location = System::Drawing::Point(10, 502);
            this->labelHyperfocalDistance->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelHyperfocalDistance->Name = L"labelHyperfocalDistance";
            this->labelHyperfocalDistance->Size = System::Drawing::Size(673, 44);
            this->labelHyperfocalDistance->TabIndex = 3;
            this->labelHyperfocalDistance->Text = L"Гиперфокальное расстояние: ";
            // 
            // labelFocalLength
            // 
            this->labelFocalLength->Location = System::Drawing::Point(20, 1120);
            this->labelFocalLength->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelFocalLength->Name = L"labelFocalLength";
            this->labelFocalLength->Size = System::Drawing::Size(497, 44);
            this->labelFocalLength->TabIndex = 4;
            this->labelFocalLength->Text = L"Фокусное расстояние: ";
            // 
            // labelAperture
            // 
            this->labelAperture->Location = System::Drawing::Point(20, 888);
            this->labelAperture->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelAperture->Name = L"labelAperture";
            this->labelAperture->Size = System::Drawing::Size(393, 44);
            this->labelAperture->TabIndex = 5;
            this->labelAperture->Text = L"Диафрагма: ";
            // 
            // labelObjectDistance
            // 
            this->labelObjectDistance->Location = System::Drawing::Point(20, 1330);
            this->labelObjectDistance->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelObjectDistance->Name = L"labelObjectDistance";
            this->labelObjectDistance->Size = System::Drawing::Size(561, 44);
            this->labelObjectDistance->TabIndex = 6;
            this->labelObjectDistance->Text = L"Расстояние до объекта: ";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(541, 1607);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(444, 186);
            this->button1->TabIndex = 10;
            this->button1->Text = L"Загрузить фоновое\r\n изображение";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &GRIP::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(36, 1607);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(428, 186);
            this->button2->TabIndex = 11;
            this->button2->Text = L"Загрузить основное\r\n изображение";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &GRIP::button2_Click_1);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(1910, 182);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(748, 1081);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 12;
            this->pictureBox1->TabStop = false;
            // 
            // labelgripp
            // 
            this->labelgripp->AutoSize = true;
            this->labelgripp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelgripp->Location = System::Drawing::Point(10, 441);
            this->labelgripp->Name = L"labelgripp";
            this->labelgripp->Size = System::Drawing::Size(215, 25);
            this->labelgripp->TabIndex = 13;
            this->labelgripp->Text = L"Глубина резкости:";
            // 
            // menuStrip1
            // 
            this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(3364, 40);
            this->menuStrip1->TabIndex = 14;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // оПрограммеToolStripMenuItem
            // 
            this->оПрограммеToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"оПрограммеToolStripMenuItem.Image")));
            this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
            this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(215, 36);
            this->оПрограммеToolStripMenuItem->Text = L"О программе";
            this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &GRIP::оПрограммеToolStripMenuItem_Click);
            // 
            // pictureBox1M
            // 
            this->pictureBox1M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1M.BackgroundImage")));
            this->pictureBox1M->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1M.Image")));
            this->pictureBox1M->Location = System::Drawing::Point(1364, 1409);
            this->pictureBox1M->Name = L"pictureBox1M";
            this->pictureBox1M->Size = System::Drawing::Size(1901, 277);
            this->pictureBox1M->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1M->TabIndex = 15;
            this->pictureBox1M->TabStop = false;
            // 
            // pictureBox2M
            // 
            this->pictureBox2M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2M.BackgroundImage")));
            this->pictureBox2M->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2M.Image")));
            this->pictureBox2M->Location = System::Drawing::Point(1404, 1409);
            this->pictureBox2M->Name = L"pictureBox2M";
            this->pictureBox2M->Size = System::Drawing::Size(139, 277);
            this->pictureBox2M->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2M->TabIndex = 16;
            this->pictureBox2M->TabStop = false;
            this->pictureBox2M->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GRIP::pictureBox2M_MouseDown);
            this->pictureBox2M->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GRIP::pictureBox2M_MouseMove);
            this->pictureBox2M->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GRIP::pictureBox2M_MouseUp);
            // 
            // pictureBoxPhotograph
            // 
            this->pictureBoxPhotograph->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxPhotograph.Image")));
            this->pictureBoxPhotograph->Location = System::Drawing::Point(1239, 1409);
            this->pictureBoxPhotograph->Name = L"pictureBoxPhotograph";
            this->pictureBoxPhotograph->Size = System::Drawing::Size(131, 277);
            this->pictureBoxPhotograph->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBoxPhotograph->TabIndex = 17;
            this->pictureBoxPhotograph->TabStop = false;
            // 
            // pictureBoxLineika
            // 
            this->pictureBoxLineika->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLineika.Image")));
            this->pictureBoxLineika->Location = System::Drawing::Point(1304, 1692);
            this->pictureBoxLineika->Name = L"pictureBoxLineika";
            this->pictureBoxLineika->Size = System::Drawing::Size(2013, 50);
            this->pictureBoxLineika->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBoxLineika->TabIndex = 18;
            this->pictureBoxLineika->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(97, 166);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(794, 166);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 19;
            this->pictureBox2->TabStop = false;
            // 
            // GRIP
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(3364, 1917);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBoxLineika);
            this->Controls->Add(this->pictureBoxPhotograph);
            this->Controls->Add(this->pictureBox2M);
            this->Controls->Add(this->pictureBox1M);
            this->Controls->Add(this->labelgripp);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->labelInFrontOfSubject);
            this->Controls->Add(this->labelBehindSubject);
            this->Controls->Add(this->labelHyperfocalDistance);
            this->Controls->Add(this->labelFocalLength);
            this->Controls->Add(this->labelAperture);
            this->Controls->Add(this->labelObjectDistance);
            this->Controls->Add(this->pictureBox);
            this->Controls->Add(this->trackBarBlurLevel);
            this->Controls->Add(this->trackBarFocalLength);
            this->Controls->Add(this->trackBarObjectDistance);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Margin = System::Windows::Forms::Padding(6);
            this->Name = L"GRIP";
            this->Text = L"Калькулятор ГРИП";
            this->Load += gcnew System::EventHandler(this, &GRIP::GRIP_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarBlurLevel))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarFocalLength))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarObjectDistance))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1M))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2M))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPhotograph))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLineika))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
        openFileDialog->Filter = "Image Files|*.bmp;*.jpg;*.jpeg;*.png|All Files|*.*";
        openFileDialog->Title = "Выберите фоновое изображение";

        if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            String^ filePath = openFileDialog->FileName;
            srcImage = Cv2::ImRead(filePath, ImreadModes::Color);
            pictureBox->Image = BitmapConverter::ToBitmap(srcImage);
        }

    }
    private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
        OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
        openFileDialog->Filter = "Image Files|*.bmp;*.jpg;*.jpeg;*.png|All Files|*.*";
        openFileDialog->Title = "Выберите основное изображение";

        if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            String^ filePath = openFileDialog->FileName;
            srcImage = Cv2::ImRead(filePath, ImreadModes::Color);
            pictureBox1->Image = BitmapConverter::ToBitmap(srcImage);
        }

    }

    private: void LoadImageFromFile(String^ imagePath) { 
        srcImage = OpenCvSharp::Cv2::ImRead(imagePath, OpenCvSharp::ImreadModes::AnyColor);
        if (!srcImage->Empty()) {
            DisplayImage(srcImage);
        }
        else {
            MessageBox::Show("Не удалось загрузить изображение.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    private: void DisplayImage(OpenCvSharp::Mat^ image) { //метод для отображения изображения
        OpenCvSharp::Mat^ processedImage = gcnew Mat();
        int blurLevel = trackBarBlurLevel->Value;
        int kernelSize = ConvertBlurLevelToKernelSize(blurLevel);
        OpenCvSharp::Cv2::GaussianBlur(image, processedImage, OpenCvSharp::Size(kernelSize, kernelSize), -2, -2, BorderTypes::Default);

        int newWidth = static_cast<int>(processedImage->Cols);
        int newHeight = static_cast<int>(processedImage->Rows);

        if (newWidth > 0 && newHeight > 0) {
            OpenCvSharp::Mat^ resizedImage = gcnew Mat();
            OpenCvSharp::Cv2::Resize(processedImage, resizedImage, OpenCvSharp::Size(newWidth, newHeight), 0, 0, OpenCvSharp::InterpolationFlags::Linear);

            Bitmap^ bitmap = OpenCvSharp::Extensions::BitmapConverter::ToBitmap(resizedImage);
            pictureBox->Image = bitmap;
        }
    }

    private: System::Void trackBarBlurLevel_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

        if (srcImage != nullptr && !srcImage->Empty()) {
            DisplayImage(srcImage);
            UpdateBlurParameters();
        }
        else {
            MessageBox::Show("Сначала загрузите изображение.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    
    private: System::Void pictureBox2M_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        isDragging = true;
        offset = e->Location;
    }
    private: System::Void pictureBox2M_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        isDragging = false;
    }

    private: System::Void trackBarFocalLength_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
        UpdateBlurParameters();
    }

    private: System::Void trackBarAperture_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
        UpdateBlurParameters();
    }

    private: System::Void trackBarObjectDistance_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
        UpdateBlurParameters();
    }

    private: System::Void trackBarHyperfocalDistance_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
        UpdateBlurParameters();
    }

    private: System::Void trackBarObjectDistance_Scroll(System::Object^ sender, System::EventArgs^ e) {
        int distance = trackBarObjectDistance->Value; // Получаем текущее значение трекбара
        // Изменяем положение pictureBox2M в зависимости от значения трекбара
        pictureBox2M->Location = System::Drawing::Point(pictureBox1M->Location.X + distance * 45, pictureBox1M->Location.Y);
    }

    private: int ConvertBlurLevelToKernelSize(int blurLevel) {
        double scale = (64.0 / blurLevel);
        int kernelSize = static_cast<int>(scale * 1.1); // Подбираем коэффициент для корректного масштабирования
        if (kernelSize % 2 == 0) {
            kernelSize += 1; // Убедитесь, что размер ядра размытия нечетный
        }
        return kernelSize;
    }

    private: void UpdateBlurParameters() { 
        double blurLevel = trackBarBlurLevel->Value;
        double focalLength = trackBarFocalLength->Value;
        double aperture = trackBarBlurLevel->Value;
        double objectDistance = trackBarObjectDistance->Value;
        double focalLengthh = focalLength / 1000;

        double hyperfocalDistance = (pow(focalLength, 2) / (aperture * 0.0074)) + focalLength;
        double hyperfocalDistancem = hyperfocalDistance / 1000;

        double behindSubject = (objectDistance * pow(focalLengthh, 2)) / (pow(focalLengthh, 2) + aperture * focalLengthh * 0.0000074 - aperture * objectDistance * 0.0000074);
        if (
            behindSubject < 0) {
            behindSubject = std::numeric_limits<double>::infinity();
        }

        double inFrontOfSubject = (objectDistance * pow(focalLengthh, 2)) / (pow(focalLengthh, 2) - aperture * focalLengthh * 0.0000074 + aperture * objectDistance * 0.0000074);
        double gripp = behindSubject - inFrontOfSubject;
        if (
            gripp < 0) {
            gripp = std::numeric_limits<double>::infinity();
        }

        labelInFrontOfSubject->Text = "Ближняя граница приемлимой чёткости: " + inFrontOfSubject.ToString("F1") + " м";
        labelBehindSubject->Text = "Дальняя граница приемлимой чёткости: " + behindSubject.ToString("F1") + " м";
        labelHyperfocalDistance->Text = "Гиперфокальное расстояние: " + hyperfocalDistancem.ToString("F2") + " м";
        labelFocalLength->Text = "Фокусное расстояние: " + focalLength.ToString("F1") + " мм";
        labelAperture->Text = "Диафрагма: " + aperture.ToString("F1");
        labelObjectDistance->Text = "Расстояние до объекта: " + objectDistance.ToString("F1") + " м";
        labelgripp->Text = "Глубина резкости: " + gripp.ToString("F1") + " м";
    }

    private: System::Void GRIP_Load(System::Object^ sender, System::EventArgs^ e) {

        this->WindowState = FormWindowState::Maximized;

    }
    private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Введение\n"
            "Добро пожаловать в справочную систему приложения для расчёта глубины резкости оптической системы фотоаппарата.\n"
            "Это приложение разработано для помощи фотографам\n"
            "в настройке параметров съёмки и визуализации результатов,"
            "что позволяет добиваться наилучшего качества снимков.\n\n"

            "Основные функции приложения\n"
            "Ввод данных: Возможность ввода расстояния до объекта съёмки, значения диафрагмы и фокусного расстояния объектива.\n"
            "Расчёт глубины резкости: Автоматический расчёт передней и задней границ зоны резкости, а также общего диапазона глубины резкости.\n"
            "Визуализация результатов: Формирование и отображение изображения, "
            "демонстрирующего пример итоговой фотографии с учётом рассчитанной глубины резкости.\n"
            "Справочная система: Подробное руководство пользователя и теоретические материалы по глубине резкости и её значению в фотографии.\n\n"

            "Инструкция по использованию\n"
            "Запуск приложения\n"
            "Убедитесь, что ваш компьютер соответствует системным требованиям:\n"
            "Операционная система: Windows 10 или выше\n"
            "Оперативная память: не менее 4 ГБ\n"
            "Устройства ввода: мышь\n\n"

            "Ввод данных\n"
            "Расстояние до объекта: Введите требуемое значение с помощью ползунка. Допустимые значения: от 1 метра до 20 метров.\n"
            "Значение диафрагмы: Введите требуемое значение с помощью ползунка (например, 2.8, 5.6, 11) в соответствующее текстовое поле или выберите из списка.\n"
            "Фокусное расстояние: Введите фокусное расстояние объектива требуемое значение с помощью ползунка. Допустимые значения: от 6 мм до 75 мм.\n\n"

            "Расчёт глубины резкости\n"
            "Приложение автоматически вычислит переднюю и заднюю границы зоны резкости, а также общий диапазон глубины резкости.\n"
            "Результаты будут отображены в соответствующих полях.\n"
            "Визуализация обновляется в реальном времени при изменении входных параметров.\n\n"

            "Теоретическая информация\n"
            "Что такое глубина резкости\n"
            "Глубина резкости — это диапазон расстояний в сцене, в пределах которого объекты выглядят чёткими и резкими на фотографии. "
            "Этот параметр важен для контроля фокуса и создания выразительных снимков.\n\n"

            "Факторы, влияющие на глубину резкости\n"
            "Расстояние до объекта: Чем больше расстояние, тем больше глубина резкости.\n"
            "Значение диафрагмы: Чем меньше значение (большая апертура), тем меньше глубина резкости.\n"
            "Фокусное расстояние: Чем больше фокусное расстояние, тем меньше глубина резкости.\n\n"

            "Спасибо за использование нашего приложения! Мы надеемся, что оно поможет вам добиваться отличных результатов в фотографии.",
            "Справка о программе");
    }
     private: System::Void pictureBox2M_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
           {
               if (isDragging)
               {
                   System::Drawing::Point newLocation = this->PointToClient(System::Windows::Forms::Cursor::Position);

                   // Проверяем, чтобы новое положение не выходило за границы pictureBox1M
                   if (newLocation.X < pictureBox1M->Location.X)
                   {
                       newLocation.X = pictureBox1M->Location.X;
                   }
                   else if (newLocation.X > pictureBox1M->Location.X + pictureBox1M->Width - pictureBox2M->Width)
                   {
                       newLocation.X = pictureBox1M->Location.X + pictureBox1M->Width - pictureBox2M->Width;
                   }

                   if (newLocation.Y < pictureBox1M->Location.Y)
                   {
                       newLocation.Y = pictureBox1M->Location.Y;
                   }
                   else if (newLocation.Y > pictureBox1M->Location.Y + pictureBox1M->Height - pictureBox2M->Height)
                   {
                       newLocation.Y = pictureBox1M->Location.Y + pictureBox1M->Height - pictureBox2M->Height;
                   }

                   pictureBox2M->Location = newLocation;
               }
               int distance = pictureBox2M->Location.X - pictureBox1M->Location.X; // Вычисляем расстояние между pictureBox1M и pictureBox2M
              
               int valueToSet = distance / 44;
               if (valueToSet < trackBarObjectDistance->Minimum)
               {
                   valueToSet = trackBarObjectDistance->Minimum;
               }
               else if (valueToSet > trackBarObjectDistance->Maximum)
               {
                   valueToSet = trackBarObjectDistance->Maximum;
               }
               trackBarObjectDistance->Value = valueToSet; 
           }      
};
}


