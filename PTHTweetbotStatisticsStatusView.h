/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotStatusView.h>

@class PTHTweetbotStatisticsStatusTimeView, PTHTweetbotStatisticsStatusBarFavoriteView, PTHTweetbotStatisticsStatusBarRetweetView;

@interface PTHTweetbotStatisticsStatusView : PTHTweetbotStatusView {

	PTHTweetbotStatisticsStatusTimeView* _timeView;
	PTHTweetbotStatisticsStatusBarFavoriteView* _favoritesBarView;
	PTHTweetbotStatisticsStatusBarRetweetView* _retweetsBarView;

}

@property (assign,nonatomic) unsigned long long maximumFavorites; 
@property (assign,nonatomic) unsigned long long maximumRetweets; 
-(void)colorAppearanceDidChange;
-(void)fontAppearanceDidChange;
-(void)_updateActivity;
-(void)_updateActivityAnimated;
-(void)setMaximumFavorites:(unsigned long long)arg1 ;
-(unsigned long long)maximumFavorites;
-(void)setMaximumRetweets:(unsigned long long)arg1 ;
-(unsigned long long)maximumRetweets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStatus:(id)arg1 ;
@end
