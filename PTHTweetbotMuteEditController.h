/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class UIScrollView, PTHTweetbotStatusFilter, PTHStaticSectionCell, NSMutableArray, NSArray;

@interface PTHTweetbotMuteEditController : PTHViewController {

	UIScrollView* _scrollView;
	PTHTweetbotStatusFilter* _originalStatusFilter;
	PTHStaticSectionCell* _matchingTweetsCell;
	PTHStaticSectionCell* _durationCell;
	NSMutableArray* _matchingTweets;
	unsigned long long _tweetCount;
	NSArray* _timelineStatuses;
	NSArray* _mentionStatuses;
	PTHTweetbotStatusFilter* _statusFilter;

}

@property (nonatomic,readonly) PTHTweetbotStatusFilter * statusFilter;              //@synthesize statusFilter=_statusFilter - In the implementation block
-(id)initWithStatusFilter:(id)arg1 ;
-(PTHTweetbotStatusFilter *)statusFilter;
-(id)editCells;
-(void)_changeDuration:(id)arg1 ;
-(void)_showMatchingTweets:(id)arg1 ;
-(void)save;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateUI;
@end
