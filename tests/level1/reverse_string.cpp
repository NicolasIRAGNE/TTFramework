/**
 * @file reverse_string.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief
 * @date 2022-09-09
 *
 * @copyright Copyright Alyce (c) 2022
 */

#include "level1.h"

#include <gtest/gtest.h>

using namespace alyce;

TEST(L1_ReverseString, SimpleTests)
{
    EXPECT_EQ(level1::reverse_string(""), "");
    EXPECT_EQ(level1::reverse_string("a"), "a");
    EXPECT_EQ(level1::reverse_string("abc"), "cba");
}

TEST(L1_ReverseString, MultipleWords)
{
    EXPECT_EQ(level1::reverse_string("Hello world!"), "!dlrow olleH");
}

TEST(L1_ReverseString, MultipleWordsWithSpaces)
{
    EXPECT_EQ(level1::reverse_string("Hello  world!"), "!dlrow  olleH");
}

TEST(L1_ReverseString, LongerString)
{
    constexpr auto str = "Hummingbirds are birds native to the Americas and comprise the biological family Trochilidae. With about 361 species and 113 genera, they occur from Alaska to Tierra del Fuego, but the vast majority of the species are found in the tropics around the equator. They are small birds, with most species measuring 7.5–13 cm (3–5 in) in length. The smallest extant hummingbird species is the 5 cm (2.0 in) bee hummingbird, which weighs less than 2.0 g (0.07 oz). The largest hummingbird species is the 23 cm (9.1 in) giant hummingbird, weighing 18–24 grams (0.63–0.85 oz). They are specialized for feeding on flower nectar, but all species also consume flying insects or spiders.";
    constexpr auto expected = ".sredips ro stcesni gniylf emusnoc osla seiceps lla tub ,ratcen rewolf no gnideef rof dezilaiceps era yehT .)zo 58.0–36.0( smarg 42–81 gnihgiew ,dribgnimmuh tnaig )ni 1.9( mc 32 eht si seiceps dribgnimmuh tsegral ehT .)zo 70.0( g 0.2 naht ssel shgiew hcihw ,dribgnimmuh eeb )ni 0.2( mc 5 eht si seiceps dribgnimmuh tnatxe tsellams ehT .htgnel ni )ni 5–3( mc 31–5.7 gnirusaem seiceps tsom htiw ,sdrib llams era yehT .rotauqe eht dnuora sciport eht ni dnuof era seiceps eht fo ytirojam tsav eht tub ,ogeuF led arreiT ot aksalA morf rucco yeht ,areneg 311 dna seiceps 163 tuoba htiW .eadilihcorT ylimaf lacigoloib eht esirpmoc dna saciremA eht ot evitan sdrib era sdribgnimmuH";

    EXPECT_EQ(level1::reverse_string(str), expected);
}
