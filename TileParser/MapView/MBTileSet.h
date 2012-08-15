//
//  MBTileSet.h
//  TileParser
//
//  Created by Moshe Berman on 8/15/12.
//
//

#import <Foundation/Foundation.h>

@interface MBTileSet : NSObject

@property (nonatomic) NSInteger firstgid;       //  The first GID in the tileset
@property (nonatomic) NSInteger height;         //  Overall height of the associated image in pixels
@property (nonatomic) NSInteger tileHeight;     //  The height of a single tile in pixels
@property (nonatomic) NSInteger tileWidth;      //  The width of a single tile in pixels
@property (nonatomic) NSInteger width;          //  Overall width of the associated image in pixels

@property (nonatomic, copy) NSString *name;     //  The name of the tileset
@property (nonatomic, copy) NSString *source;   //  The path of the source image

@property (nonatomic, readonly) CGSize mapSize;
@property (nonatomic, readonly) CGSize tileSize;

- (id)initWithDictionary:(NSDictionary *)dictionary;

@end