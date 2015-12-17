/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotAccountDataMonitor.h>

@class NSMutableOrderedSet, NSMutableSet, NSMutableArray, NSArray;

@interface PTHTweetbotAccountDataActivityMonitor : PTHTweetbotAccountDataMonitor {

	NSMutableOrderedSet* _interactions;
	BOOL _isUpdating;
	NSMutableSet* _badStatusTIDs;
	NSMutableSet* _badUserTIDs;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,copy,readonly) NSArray * interactions; 
-(id)initWithAccountData:(id)arg1 ;
-(void)update:(BOOL)arg1 streamed:(BOOL)arg2 ;
-(void)updateInteractionsIfNeeded:(/*^block*/id)arg1 ;
-(NSArray *)interactions;
@end

