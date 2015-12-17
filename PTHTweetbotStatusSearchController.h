/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusCursorController.h>

@class PTHTweetbotSavedSearch;

@interface PTHTweetbotStatusSearchController : PTHTweetbotStatusCursorController {

	PTHTweetbotSavedSearch* _savedSearch;

}

@property (nonatomic,readonly) PTHTweetbotSavedSearch * savedSearch;              //@synthesize savedSearch=_savedSearch - In the implementation block
-(PTHTweetbotSavedSearch *)savedSearch;
-(id)initWithAccount:(id)arg1 query:(id)arg2 resultType:(id)arg3 ;
-(id)initWithSavedSearch:(id)arg1 ;
-(id)searchTitle;
-(id)modalCancelButtonTitle;
-(void)save:(id)arg1 ;
@end

