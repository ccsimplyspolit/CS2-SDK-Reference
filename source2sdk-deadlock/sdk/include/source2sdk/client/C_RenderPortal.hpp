#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x9d8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hLocalPortalLink"
        // static metadata: MNetworkVarNames "EHANDLE m_hRemotePortalLink"
        // static metadata: MNetworkVarNames "CUtlString m_brushModelName"
        // static metadata: MNetworkVarNames "float m_flFadeStartDist"
        // static metadata: MNetworkVarNames "float m_flFadeEndDist"
        // static metadata: MNetworkVarNames "float m_flFadeStartAngle"
        // static metadata: MNetworkVarNames "float m_flFadeEndAngle"
        // static metadata: MNetworkVarNames "float m_flRemoteViewForwardOffset"
        // static metadata: MNetworkVarNames "Color m_fadeToColor"
        #pragma pack(push, 1)
        class C_RenderPortal : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hLocalPortalLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLocalPortalLink;
            char m_hLocalPortalLink[0x4]; // 0x9a8            
            // metadata: MNetworkEnable
            // m_hRemotePortalLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRemotePortalLink;
            char m_hRemotePortalLink[0x4]; // 0x9ac            
            // metadata: MNetworkEnable
            CUtlString m_brushModelName; // 0x9b0            
            // metadata: MNetworkEnable
            float m_flFadeStartDist; // 0x9b8            
            // metadata: MNetworkEnable
            float m_flFadeEndDist; // 0x9bc            
            // metadata: MNetworkEnable
            float m_flFadeStartAngle; // 0x9c0            
            // metadata: MNetworkEnable
            float m_flFadeEndAngle; // 0x9c4            
            // metadata: MNetworkEnable
            float m_flRemoteViewForwardOffset; // 0x9c8            
            // metadata: MNetworkEnable
            Color m_fadeToColor; // 0x9cc            
            uint8_t _pad09d0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RenderPortal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RenderPortal) == 0x9d8);
    };
};
