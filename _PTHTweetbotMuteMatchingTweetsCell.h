/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCell.h>

@class PTHTweetbotStatusView;

@interface _PTHTweetbotMuteMatchingTweetsCell : PTHTweetbotCell {

	PTHTweetbotStatusView* _statusView;
	BOOL _hideSeparatorLine;

}

@property (assign,nonatomic) BOOL hideSeparatorLine;              //@synthesize hideSeparatorLine=_hideSeparatorLine - In the implementation block
-(BOOL)hideSeparatorLine;
-(void)setHideSeparatorLine:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setItem:(id)arg1 ;
@end

