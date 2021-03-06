/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, UILabel, NSString;

@interface PTHTweetbotStatisticsStatusBarView : UIView {

	UIImageView* _imageView;
	UIView* _barView;
	UILabel* _countLabel;
	unsigned long long _count;
	unsigned long long _maximum;
	NSString* _barColorName;

}

@property (assign,nonatomic) unsigned long long count;                //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long maximum;              //@synthesize maximum=_maximum - In the implementation block
@property (nonatomic,retain) NSString * barColorName;                 //@synthesize barColorName=_barColorName - In the implementation block
-(void)setBarColorName:(NSString *)arg1 ;
-(NSString *)barColorName;
-(unsigned long long)maximum;
-(void)setMaximum:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)count;
-(void)layoutSubviews;
-(void)setCount:(unsigned long long)arg1 ;
@end

