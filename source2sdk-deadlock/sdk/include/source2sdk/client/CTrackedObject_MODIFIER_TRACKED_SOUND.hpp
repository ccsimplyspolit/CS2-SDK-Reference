#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/IModifierTrackedObject.hpp"
#include "source2sdk/client/ModifierTrackedSound_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x20
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTrackedObject_MODIFIER_TRACKED_SOUND : public source2sdk::client::IModifierTrackedObject
        {
        public:
            source2sdk::client::ModifierTrackedSound_t m_objectData; // 0x8            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTrackedObject_MODIFIER_TRACKED_SOUND because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CTrackedObject_MODIFIER_TRACKED_SOUND) == 0x20);
    };
};
