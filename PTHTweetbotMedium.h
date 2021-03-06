/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PTHTweetbotEntity, NSString, NSURL, NSDictionary;

@interface PTHTweetbotMedium : NSObject <NSCoding> {

	BOOL _macApp;
	BOOL _iOSApp;
	BOOL _requiresAuth;
	PTHTweetbotEntity* _entity;
	NSString* _title;
	NSURL* _webURL;
	long long _type;
	double _previewAspectRatio;
	NSURL* _url;
	NSDictionary* _previewURLDictionary;
	Class _parserClass;

}

@property (assign,nonatomic,__weak) PTHTweetbotEntity * entity;                //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * webURL;                                   //@synthesize webURL=_webURL - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isImage; 
@property (nonatomic,readonly) BOOL isMovie; 
@property (nonatomic,readonly) BOOL shouldMovieLoop; 
@property (assign,nonatomic) double previewAspectRatio;                        //@synthesize previewAspectRatio=_previewAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL isiTunes; 
@property (assign,getter=isMacApp,nonatomic) BOOL macApp;                      //@synthesize macApp=_macApp - In the implementation block
@property (assign,getter=isiOSApp,nonatomic) BOOL iOSApp;                      //@synthesize iOSApp=_iOSApp - In the implementation block
@property (nonatomic,retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * previewURLDictionary;              //@synthesize previewURLDictionary=_previewURLDictionary - In the implementation block
@property (assign,nonatomic) BOOL requiresAuth;                                //@synthesize requiresAuth=_requiresAuth - In the implementation block
@property (assign,nonatomic) Class parserClass;                                //@synthesize parserClass=_parserClass - In the implementation block
+(id)mediumWithEntity:(id)arg1 dictionary:(id)arg2 ;
-(id)newDetailViewController;
-(id)newDetailViewControllerWithThumbnail:(id)arg1 ;
-(void)loadPreviewImageWithSize:(CGSize)arg1 maxScale:(double)arg2 mode:(unsigned long long)arg3 progress:(/*^block*/id)arg4 response:(/*^block*/id)arg5 ;
-(double)previewAspectRatio;
-(id)initWithURL:(id)arg1 type:(long long)arg2 title:(id)arg3 webURL:(id)arg4 ;
-(BOOL)isiOSApp;
-(BOOL)shouldMovieLoop;
-(void)loadWithMaxSize:(CGSize)arg1 progress:(/*^block*/id)arg2 response:(/*^block*/id)arg3 ;
-(void)loadPreviewURLWithSize:(unsigned long long)arg1 response:(/*^block*/id)arg2 ;
-(void)setParserClass:(Class)arg1 ;
-(void)setPreviewAspectRatio:(double)arg1 ;
-(void)setMacApp:(BOOL)arg1 ;
-(void)setIOSApp:(BOOL)arg1 ;
-(void)setPreviewURLDictionary:(NSDictionary *)arg1 ;
-(void)setRequiresAuth:(BOOL)arg1 ;
-(BOOL)requiresAuth;
-(void)_loadImagePathWithURL:(id)arg1 progress:(/*^block*/id)arg2 response:(/*^block*/id)arg3 ;
-(void)_loadMovie:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)_loadImage:(id)arg1 maxSize:(CGSize)arg2 progress:(/*^block*/id)arg3 response:(/*^block*/id)arg4 ;
-(BOOL)isMacApp;
-(NSDictionary *)previewURLDictionary;
-(Class)parserClass;
-(void)setWebURL:(NSURL *)arg1 ;
-(void)loadURL:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)url;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)title;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)webURL;
-(PTHTweetbotEntity *)entity;
-(void)setEntity:(PTHTweetbotEntity *)arg1 ;
-(BOOL)isiTunes;
-(BOOL)isImage;
-(BOOL)isMovie;
@end

