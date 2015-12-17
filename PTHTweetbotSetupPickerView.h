/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class UIScrollView, NSMutableArray, UIView, NSIndexSet;

@interface PTHTweetbotSetupPickerView : UIControl {

	UIScrollView* _scrollView;
	NSMutableArray* _items;
	UIView* _checkmarkCenterLayoutGuide;
	UIView* _titleLeadingLayoutGuide;
	double _fontSize;

}

@property (nonatomic,readonly) UIView * checkmarkCenterLayoutGuide;              //@synthesize checkmarkCenterLayoutGuide=_checkmarkCenterLayoutGuide - In the implementation block
@property (nonatomic,readonly) UIView * titleLeadingLayoutGuide;                 //@synthesize titleLeadingLayoutGuide=_titleLeadingLayoutGuide - In the implementation block
@property (assign,nonatomic,__weak) NSIndexSet * pickedIndexSet; 
@property (assign,nonatomic) double fontSize;                                    //@synthesize fontSize=_fontSize - In the implementation block
-(UIView *)titleLeadingLayoutGuide;
-(void)_toggleItem:(id)arg1 ;
-(void)setPickedIndexSet:(NSIndexSet *)arg1 ;
-(NSIndexSet *)pickedIndexSet;
-(UIView *)checkmarkCenterLayoutGuide;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setFontSize:(double)arg1 ;
-(double)fontSize;
-(id)initWithTitles:(id)arg1 ;
@end
