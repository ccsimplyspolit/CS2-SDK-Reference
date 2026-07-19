#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HitGroup_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Constructor
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CBaseModelEntity_OnDamageLevelChangedArgs_t
        {
        public:
            source2sdk::client::HitGroup_t nHitGroup; // 0x0            
            std::int32_t nDamageLevel; // 0x4            
            std::int32_t nDamageLevelsRemaining; // 0x8            
            std::int32_t nPrevDamageLevel; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CBaseModelEntity_OnDamageLevelChangedArgs_t, nHitGroup) == 0x0);
        static_assert(offsetof(source2sdk::server::CBaseModelEntity_OnDamageLevelChangedArgs_t, nDamageLevel) == 0x4);
        static_assert(offsetof(source2sdk::server::CBaseModelEntity_OnDamageLevelChangedArgs_t, nDamageLevelsRemaining) == 0x8);
        static_assert(offsetof(source2sdk::server::CBaseModelEntity_OnDamageLevelChangedArgs_t, nPrevDamageLevel) == 0xc);
        
        static_assert(sizeof(source2sdk::server::CBaseModelEntity_OnDamageLevelChangedArgs_t) == 0x10);
    };
};
