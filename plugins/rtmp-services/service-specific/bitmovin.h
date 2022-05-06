#pragma once

struct bitmovin_ingest {
	const char *url;
	const char *apikey;
};

extern void init_bitmovin_data(void);
extern void unload_bitmovin_data(void);

extern void bitmovin_update(const char *key);
extern const char *bitmovin_get_ingest(const char *key,
				       const char *encoding_id);
extern const char *bitmovin_get_stream_key(void);