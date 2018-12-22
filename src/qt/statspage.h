// Copyright (c) 2011-2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_STATSPAGE_H
#define BITCOIN_QT_STATSPAGE_H

#include "guiutil.h"

#include <QDialog>
#include <QHeaderView>
#include <QItemSelection>
#include <QKeyEvent>
#include <QMenu>
#include <QPoint>
#include <QTimer>
#include <QVariant>

class OptionsModel;
class WalletModel;

namespace Ui
{
	class StatsPage;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog for requesting payment of bitcoins */
class StatsPage : public QDialog
{
	Q_OBJECT

public:
	enum ColumnWidths {
		DATE_COLUMN_WIDTH = 130,
		LABEL_COLUMN_WIDTH = 120,
		AMOUNT_MINIMUM_COLUMN_WIDTH = 160,
		MINIMUM_COLUMN_WIDTH = 130
	};

	explicit StatsPage(QWidget* parent = 0);
	~StatsPage();

	
private:
	Ui::StatsPage* ui;
	QTimer* timer;
	GUIUtil::TableViewLastColumnResizingFixer* columnResizingFixer;
	WalletModel* walletModel;
	QMenu* contextMenu;
	
};

#endif // BITCOIN_QT_STATSPAGE_H
