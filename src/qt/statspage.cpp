// Copyright (c) 2011-2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "statspage.h"
#include "ui_statspage.h"

#include "addressbookpage.h"
#include "addresstablemodel.h"
#include "bitcoinunits.h"
#include "coincontrol.h"
#include "coincontroldialog.h"
#include "libzerocoin/Denominations.h"
#include "optionsmodel.h"
#include "sendcoinsentry.h"
#include "spork.h"
#include "walletmodel.h"
#include "zccbccontroldialog.h"

#include <QClipboard>
#include <QSettings>
#include <QtWidgets>
#include <utilmoneystr.h>

StatsPage::StatsPage(QWidget* parent) : QDialog(parent),
ui(new Ui::StatsPage),
walletModel(0)
{
	nDisplayUnit = 0; // just make sure it's not unitialized
	ui->setupUi(this);
}