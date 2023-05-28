#include "cashRegisterSystem.h"

void cashRegisterSystem::on_cat_1_clicked() {
	if (!m_loadedOnce[0]) {
		        populateProductList(m_ui->scrollAreaSnacksContents, m_ui->gridSnacks, "خيوط صوف", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		        m_loadedOnce[0] = true;
		    }
		    m_ui->ProductsStackedWidget->setCurrentIndex(0);
}


void cashRegisterSystem::on_cat_2_clicked() {
	if (!m_loadedOnce[1]) {
		populateProductList(m_ui->scrollAreaDrinksContents, m_ui->gridDrinks, "خيوط قطن", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[1] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(1);
}

void cashRegisterSystem::on_cat_3_clicked() {
	if (!m_loadedOnce[2]) {
		populateProductList(m_ui->scrollAreaVegetablesContents, m_ui->gridVegetables, "خيوط مكرمية", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[2] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(2);
}

void cashRegisterSystem::on_cat_4_clicked() {
	if (!m_loadedOnce[3]) {
		populateProductList(m_ui->scrollAreaFruitsContents, m_ui->gridFruits, "خيوط تطريز", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[3] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(3);
}

void cashRegisterSystem::on_cat_5_clicked() {
	if (!m_loadedOnce[4]) {
		populateProductList(m_ui->scrollAreaSnacksContents_6, m_ui->gridSnacks_6, "خيوط كلير", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[4] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(4);
}

void cashRegisterSystem::on_cat_6_clicked() {
	if (!m_loadedOnce[5]) {
		populateProductList(m_ui->scrollAreaSnacksContents_7, m_ui->gridSnacks_7, "خيوط خياطه", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[5] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(5);
}

void cashRegisterSystem::on_cat_7_clicked() {
	if (!m_loadedOnce[6]) {
		populateProductList(m_ui->scrollAreaSnacksContents_8, m_ui->gridSnacks_8, "خيوط خيش", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[6] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(6);
}

void cashRegisterSystem::on_cat_8_clicked() {
	if (!m_loadedOnce[7]) {
		populateProductList(m_ui->scrollAreaSnacksContents_9, m_ui->gridSnacks_9, "خيوط مستوردة", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[7] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(7);
}

void cashRegisterSystem::on_cat_9_clicked() {
	if (!m_loadedOnce[8]) {
		populateProductList(m_ui->scrollAreaSnacksContents_11, m_ui->gridSnacks_11, "كنفاة مصري", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[8] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(8);
}

void cashRegisterSystem::on_cat_10_clicked() {
	if (!m_loadedOnce[9]) {
		populateProductList(m_ui->scrollAreaSnacksContents_12, m_ui->gridSnacks_12, "كنفاة صيفي", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[9] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(9);
}

void cashRegisterSystem::on_cat_11_clicked() {
	if (!m_loadedOnce[10]) {
		populateProductList(m_ui->scrollAreaSnacksContents_13, m_ui->gridSnacks_13, "كنفاة مستوردة", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[10] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(10);
}

void cashRegisterSystem::on_cat_12_clicked() {
	if (!m_loadedOnce[11]) {
		populateProductList(m_ui->scrollAreaSnacksContents_14, m_ui->gridSnacks_14, "خرز", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[11] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(11);
}

void cashRegisterSystem::on_cat_13_clicked() {
	if (!m_loadedOnce[12]) {
		populateProductList(m_ui->scrollAreaSnacksContents_15, m_ui->gridSnacks_15, "اعقاد خرز", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[12] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(12);
}

void cashRegisterSystem::on_cat_14_clicked() {
	if (!m_loadedOnce[13]) {
		populateProductList(m_ui->scrollAreaSnacksContents_16, m_ui->gridSnacks_16, "زراير", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[13] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(13);
}

void cashRegisterSystem::on_cat_15_clicked() {
	if (!m_loadedOnce[14]) {
		populateProductList(m_ui->scrollAreaSnacksContents_18, m_ui->gridSnacks_18, "معدات اكسسوار", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[14] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(14);
}

void cashRegisterSystem::on_cat_16_clicked() {
	if (!m_loadedOnce[15]) {
		populateProductList(m_ui->scrollAreaSnacksContents_19, m_ui->gridSnacks_19, "معدات تطوير", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[15] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(15);
}

void cashRegisterSystem::on_cat_17_clicked() {
	if (!m_loadedOnce[16]) {
		populateProductList(m_ui->scrollAreaSnacksContents_20, m_ui->gridSnacks_20, "معدات خياطة", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[16] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(16);
}

void cashRegisterSystem::on_cat_18_clicked() {
	if (!m_loadedOnce[17]) {
		populateProductList(m_ui->scrollAreaSnacksContents_22, m_ui->gridSnacks_22, "معدات مكرمية", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[17] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(17);
}

void cashRegisterSystem::on_cat_19_clicked() {
	if (!m_loadedOnce[18]) {
		populateProductList(m_ui->scrollAreaSnacksContents_23, m_ui->gridSnacks_23, "معدات جلد", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[18] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(18);
}

void cashRegisterSystem::on_cat_20_clicked() {
	if (!m_loadedOnce[19]) {
		populateProductList(m_ui->scrollAreaSnacksContents_24, m_ui->gridSnacks_24, "مدعات الكروشية و التركو", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[19] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(19);
}

void cashRegisterSystem::on_cat_21_clicked() {
	if (!m_loadedOnce[20]) {
		populateProductList(m_ui->scrollAreaSnacksContents_25, m_ui->gridSnacks_25, "اكسسوارات", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[20] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(20);
}

void cashRegisterSystem::on_cat_22_clicked() {
	if (!m_loadedOnce[21]) {
		populateProductList(m_ui->scrollAreaSnacksContents_26, m_ui->gridSnacks_26, "ادوات للشعر", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[21] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(21);
}

void cashRegisterSystem::on_cat_23_clicked() {
	if (!m_loadedOnce[22]) {
		populateProductList(m_ui->scrollAreaSnacksContents_27, m_ui->gridSnacks_27, "شربات", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[22] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(22);
}

void cashRegisterSystem::on_cat_24_clicked() {
	if (!m_loadedOnce[23]) {
		populateProductList(m_ui->scrollAreaSnacksContents_28, m_ui->gridSnacks_28, "ريش", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[23] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(23);
}

void cashRegisterSystem::on_cat_25_clicked() {
	if (!m_loadedOnce[24]) {
		populateProductList(m_ui->scrollAreaSnacksContents_29, m_ui->gridSnacks_29, "فرو", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[24] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(24);
}

void cashRegisterSystem::on_cat_26_clicked() {
	if (!m_loadedOnce[25]) {
		populateProductList(m_ui->scrollAreaSnacksContents_30, m_ui->gridSnacks_30, "كورك", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[25] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(25);
}

void cashRegisterSystem::on_cat_27_clicked() {
	if (!m_loadedOnce[26]) {
		populateProductList(m_ui->scrollAreaSnacksContents_31, m_ui->gridSnacks_31, "اطقم جلود", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[26] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(26);
}

void cashRegisterSystem::on_cat_28_clicked() {
	if (!m_loadedOnce[27]) {
		populateProductList(m_ui->scrollAreaSnacksContents_32, m_ui->gridSnacks_32, "جلود", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[27] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(27);
}

void cashRegisterSystem::on_cat_29_clicked() {
	if (!m_loadedOnce[28]) {
		populateProductList(m_ui->scrollAreaSnacksContents_33, m_ui->gridSnacks_33, "اخشاب", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[28] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(28);
}

void cashRegisterSystem::on_cat_30_clicked() {
	if (!m_loadedOnce[29]) {
		populateProductList(m_ui->scrollAreaSnacksContents_34, m_ui->gridSnacks_34, "استيك", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[29] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(29);
}

void cashRegisterSystem::on_cat_31_clicked() {
	if (!m_loadedOnce[30]) {
		populateProductList(m_ui->scrollAreaSnacksContents_35, m_ui->gridSnacks_35, "خيوط اكسسوار", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[30] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(30);
}

void cashRegisterSystem::on_cat_32_clicked() {
	if (!m_loadedOnce[31]) {
		populateProductList(m_ui->scrollAreaSnacksContents_36, m_ui->gridSnacks_36, "شرائط", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[31] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(31);
}

void cashRegisterSystem::on_cat_33_clicked() {
	if (!m_loadedOnce[32]) {
		populateProductList(m_ui->scrollAreaSnacksContents_37, m_ui->gridSnacks_37, "تعليقات", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[32] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(32);
}

void cashRegisterSystem::on_cat_34_clicked() {
	if (!m_loadedOnce[33]) {
		populateProductList(m_ui->scrollAreaSnacksContents_38, m_ui->gridSnacks_38, "منظمات", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[33] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(33);
}

void cashRegisterSystem::on_cat_35_clicked() {
	if (!m_loadedOnce[34]) {
		populateProductList(m_ui->scrollAreaSnacksContents_39, m_ui->gridSnacks_39, "بلجات", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[34] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(34);
}

void cashRegisterSystem::on_cat_36_clicked() {
	if (!m_loadedOnce[35]) {
		populateProductList(m_ui->scrollAreaSnacksContents_40, m_ui->gridSnacks_40, "محافظ", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[35] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(35);
}

void cashRegisterSystem::on_cat_37_clicked() {
	if (!m_loadedOnce[36]) {
		populateProductList(m_ui->scrollAreaSnacksContents_41, m_ui->gridSnacks_41, "اقمشة", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[36] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(36);
}

void cashRegisterSystem::on_cat_38_clicked() {
	if (!m_loadedOnce[37]) {
		populateProductList(m_ui->scrollAreaSnacksContents_42, m_ui->gridSnacks_42, "ديكور", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[37] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(37);
}

void cashRegisterSystem::on_cat_39_clicked() {
	if (!m_loadedOnce[38]) {
		populateProductList(m_ui->scrollAreaSnacksContents_43, m_ui->gridSnacks_43, "اربطة", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[38] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(38);
}

void cashRegisterSystem::on_cat_40_clicked() {
	if (!m_loadedOnce[39]) {
		populateProductList(m_ui->scrollAreaSnacksContents_44, m_ui->gridSnacks_44, "بوكسات", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[39] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(39);
}

void cashRegisterSystem::on_cat_41_clicked() {
	if (!m_loadedOnce[40]) {
		populateProductList(m_ui->scrollAreaSnacksContents_45, m_ui->gridSnacks_45, "مستلزمات ستائر", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[40] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(40);
}

void cashRegisterSystem::on_cat_42_clicked() {
	if (!m_loadedOnce[41]) {
		populateProductList(m_ui->scrollAreaSnacksContents_46, m_ui->gridSnacks_46, "ورد صناعي", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[41] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(41);
}

void cashRegisterSystem::on_cat_43_clicked() {
	if (!m_loadedOnce[42]) {
		populateProductList(m_ui->scrollAreaSnacksContents_47, m_ui->gridSnacks_47, "سلاسل بالمتر", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[42] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(42);
}

void cashRegisterSystem::on_cat_44_clicked() {
	if (!m_loadedOnce[43]) {
		populateProductList(m_ui->scrollAreaSnacksContents_48, m_ui->gridSnacks_48, "برويات", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[43] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(43);
}

void cashRegisterSystem::on_cat_45_clicked() {
	if (!m_loadedOnce[44]) {
		populateProductList(m_ui->scrollAreaSnacksContents_49, m_ui->gridSnacks_49, "دبابيس", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[44] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(44);
}

void cashRegisterSystem::on_cat_46_clicked() {
	if (!m_loadedOnce[45]) {
		populateProductList(m_ui->scrollAreaSnacksContents_50, m_ui->gridSnacks_50, "بروشات", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[45] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(45);
}

void cashRegisterSystem::on_cat_47_clicked() {
	if (!m_loadedOnce[46]) {
		populateProductList(m_ui->scrollAreaSnacksContents_51, m_ui->gridSnacks_51, "مستلذمات احذية", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[46] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(46);
}

void cashRegisterSystem::on_cat_48_clicked() {
	if (!m_loadedOnce[47]) {
		populateProductList(m_ui->scrollAreaSnacksContents_52, m_ui->gridSnacks_52, "سوست", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[47] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(47);
}

void cashRegisterSystem::on_cat_49_clicked() {
	if (!m_loadedOnce[48]) {
		populateProductList(m_ui->scrollAreaSnacksContents_53, m_ui->gridSnacks_53, "مستلزمات شنط", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[48] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(48);
}

void cashRegisterSystem::on_cat_50_clicked() {
	if (!m_loadedOnce[49]) {
		populateProductList(m_ui->scrollAreaSnacksContents_54, m_ui->gridSnacks_54, "شنط قماش", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[49] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(49);
}

void cashRegisterSystem::on_cat_51_clicked() {
	if (!m_loadedOnce[50]) {
		populateProductList(m_ui->scrollAreaSnacksContents_55, m_ui->gridSnacks_55, "شنطة خوص", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[50] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(50);
}

void cashRegisterSystem::on_cat_52_clicked() {
	if (!m_loadedOnce[51]) {
		populateProductList(m_ui->scrollAreaSnacksContents_56, m_ui->gridSnacks_56, "لاصق", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[51] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(51);
}

void cashRegisterSystem::on_cat_53_clicked() {
	if (!m_loadedOnce[52]) {
		populateProductList(m_ui->scrollAreaSnacksContents_57, m_ui->gridSnacks_57, "جيبرات", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[52] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(52);
}

void cashRegisterSystem::on_cat_54_clicked() {
	if (!m_loadedOnce[53]) {
		populateProductList(m_ui->scrollAreaSnacksContents_58, m_ui->gridSnacks_58, "جالونات", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[53] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(53);
}

void cashRegisterSystem::on_cat_55_clicked() {
	if (!m_loadedOnce[54]) {
		populateProductList(m_ui->scrollAreaSnacksContents_59, m_ui->gridSnacks_59, "ابر", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[54] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(54);
}

void cashRegisterSystem::on_cat_56_clicked() {
	if (!m_loadedOnce[55]) {
		populateProductList(m_ui->scrollAreaSnacksContents_60, m_ui->gridSnacks_60, "مستلزمات ماكينة خياطة", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[55] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(55);
}

void cashRegisterSystem::on_cat_57_clicked() {
	if (!m_loadedOnce[56]) {
		populateProductList(m_ui->scrollAreaSnacksContents_61, m_ui->gridSnacks_61, "توك", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[56] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(56);
}

void cashRegisterSystem::on_cat_58_clicked() {
	if (!m_loadedOnce[57]) {
		populateProductList(m_ui->scrollAreaSnacksContents_62, m_ui->gridSnacks_62, "مفارش ايتامين", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[57] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(57);
}

void cashRegisterSystem::on_cat_59_clicked() {
	if (!m_loadedOnce[58]) {
		populateProductList(m_ui->scrollAreaSnacksContents_63, m_ui->gridSnacks_63, "مفارش لاسية", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[58] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(58);
}

void cashRegisterSystem::on_cat_60_clicked() {
	if (!m_loadedOnce[59]) {
		populateProductList(m_ui->scrollAreaSnacksContents_64, m_ui->gridSnacks_64, "عامة", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
		m_loadedOnce[59] = true;
	}
	m_ui->ProductsStackedWidget->setCurrentIndex(59);
}
