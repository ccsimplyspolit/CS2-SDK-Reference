#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CFuncMover;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class PathMoverEntitySpawn
        {
        public:
            // hMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFuncMover> hMover;
            char hMover[0x4]; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // vecOtherEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> vecOtherEntities;
            char vecOtherEntities[0x18]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PathMoverEntitySpawn, hMover) == 0x0);
        static_assert(offsetof(source2sdk::server::PathMoverEntitySpawn, vecOtherEntities) == 0x8);
        
        static_assert(sizeof(source2sdk::server::PathMoverEntitySpawn) == 0x20);
    };
};
