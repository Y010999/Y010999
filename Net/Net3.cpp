class Net
{
public:


    class InputNeuron : public Neuron{
    public:

        float kernelFunction(){
            return value;
        }

    };

    KohonenNet();
    vector<Neuron*> inNeurons;
    vector<Neuron> outNeurons;
    int handle(QImage);

private:

    void study(Neuron &n, QImage pic);


    QString names[9] = {"0.bmp", "1.bmp", "2.bmp", "3.bmp","4.bmp","5.bmp","6.bmp","7.bmp", "8.bmp"};
    const uint numNumbers = 9;
};

