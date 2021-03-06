/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <Tweetbot/PTHTweetbotPostDraftUpdateProtocol.h>

@class NSArray, NSMutableArray, PTHTweetbotPostDraft, PTHTweetbotPostController, NSString;

@interface PTHTweetbotPostMediaController : PTHViewController <PTHTweetbotPostDraftUpdateProtocol> {

	NSArray* _media;
	NSMutableArray* _previewViews;
	NSMutableArray* _horizontalConstraints;
	PTHTweetbotPostDraft* _draft;
	PTHTweetbotPostController* _postController;

}

@property (nonatomic,retain) PTHTweetbotPostDraft * draft;                                   //@synthesize draft=_draft - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotPostController * postController;              //@synthesize postController=_postController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)draftDidUpdate;
-(PTHTweetbotPostDraft *)draft;
-(void)setDraft:(PTHTweetbotPostDraft *)arg1 ;
-(void)setPostController:(PTHTweetbotPostController *)arg1 ;
-(void)_showMedium:(id)arg1 ;
-(PTHTweetbotPostController *)postController;
-(void)loadView;
@end

