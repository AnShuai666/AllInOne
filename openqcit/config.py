import argparse
from openqcit import context
from openqcit import io
from openqcit import log
'''
装不上python3的appsettings的解决办法
sudo apt install python3-pip
sudo pip3 install --upgrade pip3
pip3 install setuptools==33.1.1
sudo apt install python3-pip
'''
from appsettings import SettingsParser

import sys

#参数解析
processopts = \
    [
        'QCIT_dataset',
        'QCIT_opensfm',
        'QCIT_slam',
        'QCIT_smvs',
        'QCIT_meshing',
        'QCIT_25dmeshing',
        'QCIT_mvs_texturing',
        'QCIT_georeferencing',
        'QCIT_dem',
        'QCIT_orthophoto'
    ]


