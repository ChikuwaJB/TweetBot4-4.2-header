/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotLoadingTableViewController.h>

@class PTHTweetbotTrendPlace;

@interface PTHTweetbotTrendPlaceSelectController : PTHTweetbotLoadingTableViewController {

	PTHTweetbotTrendPlace* _trendPlace;

}

@property (nonatomic,retain) PTHTweetbotTrendPlace * trendPlace;              //@synthesize trendPlace=_trendPlace - In the implementation block
-(id)nothingFoundTitle;
-(void)configure:(id)arg1 forItem:(id)arg2 ;
-(void)loadDataIfNeeded:(BOOL)arg1 ;
-(void)setTrendPlace:(PTHTweetbotTrendPlace *)arg1 ;
-(void)_updateCurrent;
-(PTHTweetbotTrendPlace *)trendPlace;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

