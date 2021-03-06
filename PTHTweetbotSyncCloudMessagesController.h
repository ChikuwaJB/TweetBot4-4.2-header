/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotSyncCloudController.h>

@class NSMutableDictionary, NSMutableSet;

@interface PTHTweetbotSyncCloudMessagesController : PTHTweetbotSyncCloudController {

	NSMutableDictionary* _records;
	NSMutableSet* _dirtyThreads;
	NSMutableDictionary* _dirtyRecords;

}
+(id)sharedController;
-(void)post:(/*^block*/id)arg1 ;
-(void)willStart;
-(void)didShutdown;
-(void)poll:(/*^block*/id)arg1 ;
-(void)receivedQueryNotification:(id)arg1 ;
-(void)_threadReadStatusUpdated:(id)arg1 ;
-(id)notificationInfo;
-(id)recordType;
@end

