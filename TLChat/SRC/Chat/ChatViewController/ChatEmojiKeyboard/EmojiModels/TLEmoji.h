//
//  TLEmoji.h
//  TLChat
//
//  Created by 李伯坤 on 16/2/20.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import "TLBaseDataModel.h"
#import "TLChatMacros.h"

@interface TLEmoji : TLBaseDataModel

@property (nonatomic, assign) TLEmojiType type;

@property (nonatomic, strong) NSString *groupID;

@property (nonatomic, strong) NSString *emojiID;

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) NSString *path;

@property (nonatomic, strong) NSString *url;

@end