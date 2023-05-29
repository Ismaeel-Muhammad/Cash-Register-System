#include "cashRegisterSystem.h"

void cashRegisterSystem::on_cat_1_1_clicked() {
	if (!m_loadedOnce[0]) {
		populateProductList(m_ui->scrollAreaSnacksContents_2, m_ui->gridSnacks_2, "خيوط صوف", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[0] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(0);
}


void cashRegisterSystem::on_cat_1_2_clicked() {
	if (!m_loadedOnce[1]) {
		populateProductList(m_ui->scrollAreaDrinksContents_2, m_ui->gridDrinks_2, "خيوط قطن", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[1] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(1);
}

void cashRegisterSystem::on_cat_1_3_clicked() {
	if (!m_loadedOnce[2]) {
		populateProductList(m_ui->scrollAreaVegetablesContents_2, m_ui->gridVegetables_2, "خيوط مكرمية", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[2] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(2);
}

void cashRegisterSystem::on_cat_1_4_clicked() {
	if (!m_loadedOnce[3]) {
		populateProductList(m_ui->scrollAreaFruitsContents_2, m_ui->gridFruits_2, "خيوط تطريز", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[3] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(3);
}

void cashRegisterSystem::on_cat_1_5_clicked() {
	if (!m_loadedOnce[4]) {
		populateProductList(m_ui->scrollAreaSnacksContents_65, m_ui->gridSnacks_65, "خيوط كليم", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[4] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(4);
}

void cashRegisterSystem::on_cat_1_6_clicked() {
	if (!m_loadedOnce[5]) {
		populateProductList(m_ui->scrollAreaSnacksContents_66, m_ui->gridSnacks_66, "خيوط خياطه", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[5] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(5);
}

void cashRegisterSystem::on_cat_1_7_clicked() {
	if (!m_loadedOnce[6]) {
		populateProductList(m_ui->scrollAreaSnacksContents_67, m_ui->gridSnacks_67, "خيوط خيش", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[6] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(6);
}

void cashRegisterSystem::on_cat_1_8_clicked() {
	if (!m_loadedOnce[7]) {
		populateProductList(m_ui->scrollAreaSnacksContents_68, m_ui->gridSnacks_68, "خيوط مستوردة", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[7] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(7);
}

void cashRegisterSystem::on_cat_1_9_clicked() {
	if (!m_loadedOnce[8]) {
		populateProductList(m_ui->scrollAreaSnacksContents_69, m_ui->gridSnacks_69, "كنفاة مصري", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[8] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(8);
}

void cashRegisterSystem::on_cat_1_10_clicked() {
	if (!m_loadedOnce[9]) {
		populateProductList(m_ui->scrollAreaSnacksContents_70, m_ui->gridSnacks_70, "كنفاة صيني", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[9] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(9);
}

void cashRegisterSystem::on_cat_1_11_clicked() {
	if (!m_loadedOnce[10]) {
		populateProductList(m_ui->scrollAreaSnacksContents_71, m_ui->gridSnacks_71, "كنفاة مستوردة", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[10] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(10);
}

void cashRegisterSystem::on_cat_1_12_clicked() {
	if (!m_loadedOnce[11]) {
		populateProductList(m_ui->scrollAreaSnacksContents_72, m_ui->gridSnacks_72, "خرز", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[11] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(11);
}

void cashRegisterSystem::on_cat_1_13_clicked() {
	if (!m_loadedOnce[12]) {
		populateProductList(m_ui->scrollAreaSnacksContents_73, m_ui->gridSnacks_73, "اعقاد خرز", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[12] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(12);
}

void cashRegisterSystem::on_cat_1_14_clicked() {
	if (!m_loadedOnce[13]) {
		populateProductList(m_ui->scrollAreaSnacksContents_74, m_ui->gridSnacks_74, "زراير", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[13] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(13);
}

void cashRegisterSystem::on_cat_1_15_clicked() {
	if (!m_loadedOnce[14]) {
		populateProductList(m_ui->scrollAreaSnacksContents_75, m_ui->gridSnacks_75, "معدات اكسسوار", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[14] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(14);
}

void cashRegisterSystem::on_cat_1_16_clicked() {
	if (!m_loadedOnce[15]) {
		populateProductList(m_ui->scrollAreaSnacksContents_76, m_ui->gridSnacks_76, "معدات تطوير", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[15] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(15);
}

void cashRegisterSystem::on_cat_1_17_clicked() {
	if (!m_loadedOnce[16]) {
		populateProductList(m_ui->scrollAreaSnacksContents_77, m_ui->gridSnacks_77, "معدات خياطة", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[16] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(16);
}

void cashRegisterSystem::on_cat_1_18_clicked() {
	if (!m_loadedOnce[17]) {
		populateProductList(m_ui->scrollAreaSnacksContents_78, m_ui->gridSnacks_78, "معدات مكرمية", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[17] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(17);
}

void cashRegisterSystem::on_cat_1_19_clicked() {
	if (!m_loadedOnce[18]) {
		populateProductList(m_ui->scrollAreaSnacksContents_79, m_ui->gridSnacks_79, "معدات جلد", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[18] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(18);
}

void cashRegisterSystem::on_cat_1_20_clicked() {
	if (!m_loadedOnce[19]) {
		populateProductList(m_ui->scrollAreaSnacksContents_80, m_ui->gridSnacks_80, "معدات الكروشية و التركو", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[19] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(19);
}

void cashRegisterSystem::on_cat_1_21_clicked() {
	if (!m_loadedOnce[20]) {
		populateProductList(m_ui->scrollAreaSnacksContents_81, m_ui->gridSnacks_81, "اكسسوارات", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[20] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(20);
}

void cashRegisterSystem::on_cat_1_22_clicked() {
	if (!m_loadedOnce[21]) {
		populateProductList(m_ui->scrollAreaSnacksContents_82, m_ui->gridSnacks_82, "ادوات للشعر", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[21] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(21);
}

void cashRegisterSystem::on_cat_1_23_clicked() {
	if (!m_loadedOnce[22]) {
		populateProductList(m_ui->scrollAreaSnacksContents_83, m_ui->gridSnacks_83, "شربات", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[22] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(22);
}

void cashRegisterSystem::on_cat_1_24_clicked() {
	if (!m_loadedOnce[23]) {
		populateProductList(m_ui->scrollAreaSnacksContents_84, m_ui->gridSnacks_84, "ريش", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[23] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(23);
}

void cashRegisterSystem::on_cat_1_25_clicked() {
	if (!m_loadedOnce[24]) {
		populateProductList(m_ui->scrollAreaSnacksContents_85, m_ui->gridSnacks_85, "فرو", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[24] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(24);
}

void cashRegisterSystem::on_cat_1_26_clicked() {
	if (!m_loadedOnce[25]) {
		populateProductList(m_ui->scrollAreaSnacksContents_86, m_ui->gridSnacks_86, "كورك", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[25] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(25);
}

void cashRegisterSystem::on_cat_1_27_clicked() {
	if (!m_loadedOnce[26]) {
		populateProductList(m_ui->scrollAreaSnacksContents_87, m_ui->gridSnacks_87, "اطقم جلود", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[26] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(26);
}

void cashRegisterSystem::on_cat_1_28_clicked() {
	if (!m_loadedOnce[27]) {
		populateProductList(m_ui->scrollAreaSnacksContents_88, m_ui->gridSnacks_88, "جلود", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[27] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(27);
}

void cashRegisterSystem::on_cat_1_29_clicked() {
	if (!m_loadedOnce[28]) {
		populateProductList(m_ui->scrollAreaSnacksContents_89, m_ui->gridSnacks_89, "اخشاب", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[28] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(28);
}

void cashRegisterSystem::on_cat_1_30_clicked() {
	if (!m_loadedOnce[29]) {
		populateProductList(m_ui->scrollAreaSnacksContents_90, m_ui->gridSnacks_90, "استيك", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[29] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(29);
}

void cashRegisterSystem::on_cat_1_31_clicked() {
	if (!m_loadedOnce[30]) {
		populateProductList(m_ui->scrollAreaSnacksContents_91, m_ui->gridSnacks_91, "خيوط اكسسوار", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[30] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(30);
}

void cashRegisterSystem::on_cat_1_32_clicked() {
	if (!m_loadedOnce[31]) {
		populateProductList(m_ui->scrollAreaSnacksContents_92, m_ui->gridSnacks_92, "شرائط", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[31] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(31);
}

void cashRegisterSystem::on_cat_1_33_clicked() {
	if (!m_loadedOnce[32]) {
		populateProductList(m_ui->scrollAreaSnacksContents_93, m_ui->gridSnacks_93, "تعليقات", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[32] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(32);
}

void cashRegisterSystem::on_cat_1_34_clicked() {
	if (!m_loadedOnce[33]) {
		populateProductList(m_ui->scrollAreaSnacksContents_94, m_ui->gridSnacks_94, "منظمات", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[33] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(33);
}

void cashRegisterSystem::on_cat_1_35_clicked() {
	if (!m_loadedOnce[34]) {
		populateProductList(m_ui->scrollAreaSnacksContents_95, m_ui->gridSnacks_95, "بلجات", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[34] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(34);
}

void cashRegisterSystem::on_cat_1_36_clicked() {
	if (!m_loadedOnce[35]) {
		populateProductList(m_ui->scrollAreaSnacksContents_96, m_ui->gridSnacks_96, "محافظ", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[35] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(35);
}

void cashRegisterSystem::on_cat_1_37_clicked() {
	if (!m_loadedOnce[36]) {
		populateProductList(m_ui->scrollAreaSnacksContents_97, m_ui->gridSnacks_97, "اقمشة", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[36] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(36);
}

void cashRegisterSystem::on_cat_1_38_clicked() {
	if (!m_loadedOnce[37]) {
		populateProductList(m_ui->scrollAreaSnacksContents_98, m_ui->gridSnacks_98, "ديكور", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[37] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(37);
}

void cashRegisterSystem::on_cat_1_39_clicked() {
	if (!m_loadedOnce[38]) {
		populateProductList(m_ui->scrollAreaSnacksContents_99, m_ui->gridSnacks_99, "اربطة", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[38] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(38);
}

void cashRegisterSystem::on_cat_1_40_clicked() {
	if (!m_loadedOnce[39]) {
		populateProductList(m_ui->scrollAreaSnacksContents_100, m_ui->gridSnacks_100, "بوكسات", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[39] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(39);
}

void cashRegisterSystem::on_cat_1_41_clicked() {
	if (!m_loadedOnce[40]) {
		populateProductList(m_ui->scrollAreaSnacksContents_101, m_ui->gridSnacks_101, "مستلزمات ستائر", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[40] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(40);
}

void cashRegisterSystem::on_cat_1_42_clicked() {
	if (!m_loadedOnce[41]) {
		populateProductList(m_ui->scrollAreaSnacksContents_102, m_ui->gridSnacks_102, "ورد صناعي", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[41] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(41);
}

void cashRegisterSystem::on_cat_1_43_clicked() {
	if (!m_loadedOnce[42]) {
		populateProductList(m_ui->scrollAreaSnacksContents_103, m_ui->gridSnacks_103, "سلاسل بالمتر", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[42] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(42);
}

void cashRegisterSystem::on_cat_1_44_clicked() {
	if (!m_loadedOnce[43]) {
		populateProductList(m_ui->scrollAreaSnacksContents_104, m_ui->gridSnacks_104, "برويات", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[43] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(43);
}

void cashRegisterSystem::on_cat_1_45_clicked() {
	if (!m_loadedOnce[44]) {
		populateProductList(m_ui->scrollAreaSnacksContents_105, m_ui->gridSnacks_105, "دبابيس", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[44] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(44);
}

void cashRegisterSystem::on_cat_1_46_clicked() {
	if (!m_loadedOnce[45]) {
		populateProductList(m_ui->scrollAreaSnacksContents_106, m_ui->gridSnacks_106, "بروشات", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[45] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(45);
}

void cashRegisterSystem::on_cat_1_47_clicked() {
	if (!m_loadedOnce[46]) {
		populateProductList(m_ui->scrollAreaSnacksContents_107, m_ui->gridSnacks_107, "مستلذمات احذية", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[46] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(46);
}

void cashRegisterSystem::on_cat_1_48_clicked() {
	if (!m_loadedOnce[47]) {
		populateProductList(m_ui->scrollAreaSnacksContents_108, m_ui->gridSnacks_108, "سوست", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[47] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(47);
}

void cashRegisterSystem::on_cat_1_49_clicked() {
	if (!m_loadedOnce[48]) {
		populateProductList(m_ui->scrollAreaSnacksContents_109, m_ui->gridSnacks_109, "مستلزمات شنط", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[48] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(48);
}

void cashRegisterSystem::on_cat_1_50_clicked() {
	if (!m_loadedOnce[49]) {
		populateProductList(m_ui->scrollAreaSnacksContents_110, m_ui->gridSnacks_110, "شنط قماش", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[49] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(49);
}

void cashRegisterSystem::on_cat_1_51_clicked() {
	if (!m_loadedOnce[50]) {
		populateProductList(m_ui->scrollAreaSnacksContents_111, m_ui->gridSnacks_111, "شنطة خوص", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[50] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(50);
}

void cashRegisterSystem::on_cat_1_52_clicked() {
	if (!m_loadedOnce[51]) {
		populateProductList(m_ui->scrollAreaSnacksContents_112, m_ui->gridSnacks_112, "لاصق", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[51] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(51);
}

void cashRegisterSystem::on_cat_1_53_clicked() {
	if (!m_loadedOnce[52]) {
		populateProductList(m_ui->scrollAreaSnacksContents_113, m_ui->gridSnacks_113, "جيبرات", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[52] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(52);
}

void cashRegisterSystem::on_cat_1_54_clicked() {
	if (!m_loadedOnce[53]) {
		populateProductList(m_ui->scrollAreaSnacksContents_114, m_ui->gridSnacks_114, "جالونات", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[53] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(53);
}

void cashRegisterSystem::on_cat_1_55_clicked() {
	if (!m_loadedOnce[54]) {
		populateProductList(m_ui->scrollAreaSnacksContents_115, m_ui->gridSnacks_115, "ابر", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[54] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(54);
}

void cashRegisterSystem::on_cat_1_56_clicked() {
	if (!m_loadedOnce[55]) {
		populateProductList(m_ui->scrollAreaSnacksContents_116, m_ui->gridSnacks_116, "مستلزمات ماكينة خياطة", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[55] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(55);
}

void cashRegisterSystem::on_cat_1_57_clicked() {
	if (!m_loadedOnce[56]) {
		populateProductList(m_ui->scrollAreaSnacksContents_117, m_ui->gridSnacks_117, "توك", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[56] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(56);
}

void cashRegisterSystem::on_cat_1_58_clicked() {
	if (!m_loadedOnce[57]) {
		populateProductList(m_ui->scrollAreaSnacksContents_118, m_ui->gridSnacks_118, "مفارش ايتامين", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[57] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(57);
}

void cashRegisterSystem::on_cat_1_59_clicked() {
	if (!m_loadedOnce[58]) {
		populateProductList(m_ui->scrollAreaSnacksContents_119, m_ui->gridSnacks_119, "مفارش لاسية", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[58] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(58);
}

void cashRegisterSystem::on_cat_1_60_clicked() {
	if (!m_loadedOnce[59]) {
		populateProductList(m_ui->scrollAreaSnacksContents_120, m_ui->gridSnacks_120, "عامة", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
		m_loadedOnce[59] = true;
	}
	m_ui->ProductsStackedWidget_2->setCurrentIndex(59);
}
