/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOGeocodeRequest, GEOLocation;



@interface GEOLocRequestElement : PBRequest 
{
    GEOLocation *_location;
    GEOGeocodeRequest *_geocode;
}

@property(readonly) BOOL hasLocation;
@property(readonly) BOOL hasGeocode;
@property(retain) GEOGeocodeRequest *geocode;
@property(retain) GEOLocation *location;


- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)hasLocation;
- (void)setGeocode:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasGeocode;
- (id)geocode;

@end