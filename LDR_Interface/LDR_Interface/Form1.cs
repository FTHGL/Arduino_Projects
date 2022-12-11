using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;

namespace LDR_Interface
{
    public partial class Form1 : Form
    {
        private string data;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string[] ports = SerialPort.GetPortNames();
            foreach(string port in ports)
                comboBox1.Items.Add(port);
            serialPort1.DataReceived += new SerialDataReceivedEventHandler(SerialPort1_DataReceived);

        }

        private void SerialPort1_DataReceived(object sender, SerialDataReceivedEventArgs e) 
        {
            data = serialPort1.ReadLine();  //veriyi al
            this.Invoke(new EventHandler(displayData_event));
        }
        private void displayData_event(object sender, EventArgs e)
        {
            progressBar1.Value = Convert.ToInt16(data); //gelen değeri progress bar değerine eşitle
            textBox1.Text += DateTime.Now.ToString() + "        " + data + "\n"; // gelen veriyi güncel zamanda textbar içinde gösterim
            label2.Text = "LDR value =" + data; //veriyi label a ekle
        
        }

        private void start_Click(object sender, EventArgs e)
        {
            try
            {
                serialPort1.PortName = comboBox1.Text; //comboBox1 deki seçili ismi port a ata
                serialPort1.BaudRate = 9600;
                serialPort1.Open();
                stop.Enabled = true;
                start.Enabled = false;

            }
            catch (Exception ex) { 
            
                MessageBox.Show(ex.Message,"hata");
            }
        }

        private void stop_Click(object sender, EventArgs e)
        {
            serialPort1.Close();
            stop.Enabled = false;
            start.Enabled = true;
        }

        private void save_Click(object sender, EventArgs e)
        {
            try
            {
                string filelocation = @"**file path**";
                string filename = "data.TXT";
                System.IO.File.WriteAllText(filelocation + filename, "time\t\t\tValue\n" + textBox1.Text);
                MessageBox.Show("dosya başarıyla kaydedildi", "Mesaj");
            }
            catch (Exception ex2) {

                MessageBox.Show(ex2.Message, "hata");
            }
        }

        private void reset_Click(object sender, EventArgs e)
        {
            textBox1.ResetText();
        }
    }
}
