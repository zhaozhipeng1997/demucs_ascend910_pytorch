# Music Source Separation in the Waveform Domain

https://github.com/facebookresearch/demucs


在华为昇腾Ascend910，基于Pytorch1.8.1修改，可以在NPU平台上开发。

Train
```Python
python -m demucs -b 4  --musdb ./musdb18/ --channels 64
```


