/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHColorGroupTableViewCell.h>

@class PTHTweetbotStatusFilter;

@interface PTHTweetbotMuteCell : PTHColorGroupTableViewCell {

	PTHTweetbotStatusFilter* _filter;

}

@property (nonatomic,retain) PTHTweetbotStatusFilter * filter;              //@synthesize filter=_filter - In the implementation block
-(PTHTweetbotStatusFilter *)filter;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFilter:(PTHTweetbotStatusFilter *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateTime;
@end

