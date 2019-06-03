from openqcit import log
import unittest
class LogTest(unittest.TestCase):
    def loginfo_test(self):
        self.assertEqual(log.QCIT_INFO("qcitinfo"), "qcitinfo")

